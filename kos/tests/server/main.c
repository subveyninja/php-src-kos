#ifdef __KOS__
# include <strict/c/stdio.h>
# include <strict/posix/unistd.h>
# include <strict/c/stdlib.h>
# include <strict/posix/sys/socket.h>
# include <strict/c/string.h>
# include <strict/posix/fcntl.h>
# include <strict/posix/pthread.h>
#else
# include <sys/socket.h>
# include <pthread.h>
# include <fcntl.h>
# include <errno.h>
#endif

#include <limits.h>
#include <kos.h>
#include <unistd.h>
#include <zend_types.h>

void* kos_main(void *args);

int main(int argc, char *argv[]) {
    int main_sock = create_local_server_nonblocking_socket(KOS_TESTING_PORT);
    int save_main_sock = main_sock;

    // redirect STDOUT to our descriptor
    int stdout_fd[2];

    int res_pipe = pipe(stdout_fd);
    if (0 != res_pipe) {
        fprintf(stderr, "Server: Can't pipe stdout_fd\n");
        return 1;
    }

    int res_dup2 = dup2(stdout_fd[1], STDOUT_FILENO);
    if (0 > res_dup2) {
        fprintf(stderr, "Server: Can't dup2 stdout_fd\n");
        return 1;
    }

    close(stdout_fd[1]);

    // Remember the current director
    char currentDir[PATH_MAX + 1];
    getcwd(currentDir, PATH_MAX);

    int trying_to_receive = 10000;
    while (1) {
        // @todo: can't explain how the main sock changing inside main() thread
        if (main_sock != save_main_sock) {
            main_sock = save_main_sock;
        }

        // Simple implement select() with timer
        int cur_sock = accept(main_sock, NULL, NULL);
        if (0 > cur_sock) {
            --trying_to_receive;
            if (0 == trying_to_receive) {
                fprintf(stderr, "Server can't get new request\n");
                break;
            }
            usleep(10000);
            continue;
        }

        trying_to_receive = 1000;

        // Receive command for main() thread
        char request[KOS_TESTING_BUF_SIZE] = {0};
        int res_recv = recv_while_eof(cur_sock, request, KOS_TESTING_BUF_SIZE);
        if (0 >= res_recv) {
            fprintf(stderr, "Server: failed to recv data or empty data\n");
            close(cur_sock);
            continue;
        }

        // If `Client` said done, let's show results
        if (strcmp(request, "End") == 0) {
            close(cur_sock);
            close(main_sock);
            break;
        }

        // Collect and spit arguments
        kos_args_t *data = split(request);

        // Before running main() thread update working dir
        chdir(currentDir);

#ifdef __KOS__
        // Before running main() thread make all descriptors nonblocking
        // coz some tests block on read() and never end
        for (int i = 0; i < 100; ++i) {
            fcntl(i, F_SETFL, fcntl(i, F_GETFL) | O_NONBLOCK);
        }
#endif

        // Start main() thread
        int status_addr = create_thread_and_join(data, kos_main);
        if (0 > status_addr) {
            close(cur_sock);
            free_kos_args(data);
            continue;
        }

#ifdef __KOS__
        // Revert nonblocking for all descriptors
        for (int i = 0; i < 100; ++i) {
            if (save_main_sock != i) {
                fcntl(i, F_SETFL, fcntl(i, F_GETFL) & ~O_NONBLOCK);
            }
        }
#endif

        // Collect output from main() thread
        char buf_stdout[KOS_TESTING_BUF_SIZE] = {0};
        int res_read_stdout = read_nonblocking_stdout(stdout_fd[0], buf_stdout, sizeof(buf_stdout));
        if (0 > res_read_stdout) {
            fprintf(stderr, "Server: Can't read from pipe stdout_fd\n");
            return 1;
        }

        // Preparing response for `Client`
        char response[KOS_TESTING_BUF_SIZE + 16] = {0};

#ifdef __KOS__
        size_t len = strlen(buf_stdout);
        size_t pos = 0;
        while (pos < len && buf_stdout[pos] != 13) {
            ++pos;
        }
        if (pos == len) {
            sprintf(response, "%03d%s", status_addr, buf_stdout);
        } else {
            ++pos;
            for (int i = 0; i < pos; ++i) {
                fprintf(stderr, "%c", buf_stdout[i]);
            }
            sprintf(response, "%03d%s", status_addr, buf_stdout + pos);
        }
#else
        sprintf(response, "%03d%s", status_addr, buf_stdout);
#endif

        // Send...
        ssize_t res_send = send(cur_sock, response, strlen(response), 0);
        if (0 > res_send) {
            fprintf(stderr, "Server: Can't send response\n");
        }

        close(cur_sock);
        free_kos_args(data);
    }

    return 0;
}
