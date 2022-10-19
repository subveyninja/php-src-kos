#include <sys/socket.h>

#ifdef __KOS__
# include <strict/posix/netinet/in.h>
# include <strict/c/string.h>
# include <strict/posix/unistd.h>
# include <kos_net.h>
# include <strict/posix/sys/stat.h>
# include <strict/posix/fcntl.h>
# include <strict/posix/pthread.h>
#else
# include <string.h>
# include <malloc.h>
# include <unistd.h>
# include <fcntl.h>
# include <pthread.h>
#endif

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>
#include <netinet/in.h>
#include <sys/mount.h>
#include <assert.h>
#include "kos.h"


int create_local_server_nonblocking_socket(int port) {
    struct sockaddr_in serv_sock_addr;

    int server_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    fcntl(server_sock, F_SETFL, fcntl(0, F_GETFL) | O_NONBLOCK);

#ifndef __KOS__
    int enable = 1;
    if (setsockopt(server_sock, SOL_SOCKET, SO_REUSEADDR, &enable, sizeof(int)) < 0) {
        fprintf(stderr, "%s(): failed to set SO_REUSEADDR: %s\n", __func__, strerror(errno));
    }
#endif

    if (-1 == server_sock) {
        return -1;
    }

    memset(&serv_sock_addr, 0, sizeof(serv_sock_addr));

    serv_sock_addr.sin_family = AF_INET;
    serv_sock_addr.sin_port = htons(port);
    serv_sock_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (-1 == bind(server_sock, (struct sockaddr *) &serv_sock_addr, sizeof(serv_sock_addr))) {
        fprintf(stderr, "%s(): failed to bind socket: %s\n", __func__, strerror(errno));
        close(server_sock);
        return -1;
    }

    if (-1 == listen(server_sock, 10)) {
        fprintf(stderr, "%s(): failed to listen socket: %s\n", __func__, strerror(errno));
        close(server_sock);
        return -1;
    }

    return server_sock;
}

int create_local_client_socket_and_connect(int port) {
    int client_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (-1 == client_sock) {
        fprintf(stderr, "%s(): failed to create socket: %s\n", __func__, strerror(errno));
        return -1;
    }

    struct sockaddr_in stSockAddr;
    memset(&stSockAddr, 0, sizeof(stSockAddr));
    stSockAddr.sin_family = AF_INET;
    stSockAddr.sin_port = htons(port);

    struct addrinfo hints;
    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;

    struct addrinfo *resultHints = NULL;
    int res = getaddrinfo("127.0.0.1", NULL, &hints, &resultHints);
    if (res != 0) {
        fprintf(stderr, "%s(): failed to get addr info: %s\n", __func__, strerror(errno));
        close(client_sock);
        return -1;
    }

    struct sockaddr_in *in_addr = (struct sockaddr_in *) resultHints->ai_addr;
    memcpy(&stSockAddr.sin_addr.s_addr, &in_addr->sin_addr.s_addr, sizeof(in_addr_t));
    freeaddrinfo(resultHints);

    res = -1;
    for (int i = 0; res == -1 && i < 1000; i++) {
        usleep(10000);
        res = connect(client_sock, (struct sockaddr *) &stSockAddr, sizeof(stSockAddr));
    }

    if (res == -1) {
        fprintf(stderr, "%s(): failed to connect: %s\n", __func__, strerror(errno));
        close(client_sock);
        return -1;
    }

    return client_sock;
}

int recv_while_eof(int sock, char *out_buf, int out_buf_len) {
    int total_recv = 0;

    while (1) {
        char buff[KOS_TESTING_BUF_SIZE] = {0};

        ssize_t read_res = recv(sock, buff, KOS_TESTING_BUF_SIZE - 1, 0);
        out_buf_len -= (int)read_res;
        total_recv += (int)read_res;

        if (0 > out_buf_len) {
            assert(0);
        }

        if (-1 == read_res) {
            if (errno == EAGAIN) {
                usleep(10);
                continue;
            }
            fprintf(stderr, "%s(): failed to recv: %s\n", __func__, strerror(errno));
            close(sock);
            break;
        } else if (0 == read_res) {
            break;
        } else {
            sprintf(out_buf, "%s%s", out_buf, buff);
            break;
        }
    }

    return total_recv;
}

kos_args_t *split(char *str) {
    const char* argv[1024];
    int argc = 0;
    int space = 1;
    int quote = 0;
    char* dst = str;

    for (const char* src = str; *src; ++src)
    {
        if (space > 0 && *src == ' ')
        {
            continue;
        }
        if (space > 0)
        {
            space = 0;
            argv[argc++] = dst;
        }
        if (*src == '"')
        {
            quote = quote == 1 ? 0 : 1;
            continue;
        }
        if (*src == ' ' && quote == 0)
        {
            *dst++ = 0;
            space = 1;
        }
        else
        {
            *dst++ = *src;
        }
    }
    *dst = 0;

    kos_args_t *ret = (kos_args_t *)malloc(sizeof(kos_args_t));
    ret->argv = (char **)malloc(sizeof(char *) * (argc + 1));
    ret->argc = 0;

    for (int i = 0; i < argc; ++i) {
        if (strstr("2>&1", argv[i])) {
            continue;
        }
        ret->argv[ret->argc] = strdup(argv[i]);
        ++ret->argc;
    }

    ret->argv[ret->argc] = NULL;

    return ret;
}

void free_kos_args(kos_args_t *data) {
    for (int i = 0; i < data->argc; ++i) {
        free(data->argv[i]);
    }
    free(data);
}

int create_thread_and_join(kos_args_t *data, void *(*f)(void *args)) {
    pthread_t thread;
    int status;
    int *status_addr;

    status = pthread_create(&thread, NULL, f, (void *)data);
    if (status != 0) {
        fprintf(stderr, "Can't create thread, status = %d\n", status);
        return -1;
    }

    status = pthread_join(thread, (void**)&status_addr);
    if (status != 0) {
        fprintf(stderr, "Can't join thread, status = %d\n", status);
        return -1;
    }

    int ret = *status_addr;
    free(status_addr);

    return ret;
}

int read_nonblocking_stdout(int fd, char *buf, int buf_len) {
    fflush(stdout);

    fcntl(fd, F_SETFL, fcntl(fd, F_GETFL) | O_NONBLOCK);
    int res_read_stdout = (int)read(fd, buf, buf_len);
    if (0 > res_read_stdout && errno != EAGAIN) {
        fprintf(stderr, "Can't read from pipe stdout_fd\n");
        return -1;
    }

    if (errno == EAGAIN) {
        return 0;
    }

    return res_read_stdout;
}
