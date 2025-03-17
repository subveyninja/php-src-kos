#ifndef PROC_OPEN_KOS_H
#define PROC_OPEN_KOS_H

#include <stdio.h>

#include "php.h"

#define KOS_TESTING_BUF_SIZE 50 * 1024
#define KOS_TESTING_PORT 8001

typedef struct kos_args {
    char **argv;
    int argc;
} kos_args_t;

int create_local_server_nonblocking_socket(int port);
int create_local_client_socket_and_connect(int port);
int recv_while_eof(int sock, char *out_buf, int out_buf_len);

kos_args_t *split(char *str);
void free_kos_args(kos_args_t *data);

int create_thread_and_join(kos_args_t *data, void *(*f)(void *args));
PHP_MINIT_FUNCTION(kos_proc_open);

#endif // PROC_OPEN_KOS_H
