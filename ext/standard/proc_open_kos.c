#include <stdio.h>
#include <ctype.h>
#include <signal.h>
#include "php_string.h"
#include "ext/standard/head.h"
#include "ext/standard/basic_functions.h"
#include "ext/standard/file.h"
#include "exec.h"
#include "php_globals.h"
#include "SAPI.h"
#include "main/php_network.h"
#include "zend_smart_string.h"
#include "proc_open_kos.h"

#include <sys/wait.h>
#include <fcntl.h>

#include <sys/socket.h>

#ifdef __KOS__
#include <strict/posix/netinet/in.h>
#include <strict/c/string.h>
#include <strict/posix/unistd.h>
#include <strict/posix/sys/stat.h>
#include <strict/posix/fcntl.h>
#include <strict/posix/pthread.h>
#else
#include <string.h>
#include <malloc.h>
#include <unistd.h>
#include <fcntl.h>
#include <pthread.h>
#endif

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>
#include <netinet/in.h>
#include <sys/mount.h>
#include <assert.h>

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

static int g_last_proc_exit_status;
static int g_last_cli_socket;
static int le_proc_open; /* Resource number for `proc` resources */

typedef int php_file_descriptor_t;
typedef pid_t php_process_id_t;
# define PHP_INVALID_FD (-1)

/* Environment block under Win32 is a NUL terminated sequence of NUL terminated
 *   name=value strings.
 * Under Unix, it is an argv style array. */
typedef struct _php_process_env {
	char *envp;
	char **envarray;
} php_process_env;

typedef struct _php_process_handle {
	php_process_id_t	child;
	int npipes;
	zend_resource **pipes;
	char *command;
	php_process_env env;
} php_process_handle;

/* {{{ _php_array_to_envp
 * Process the `environment` argument to `proc_open`
 * Convert into data structures which can be passed to underlying OS APIs like `exec` on POSIX or
 * `CreateProcessW` on Win32 */
static php_process_env _php_array_to_envp(zval *environment)
{
	zval *element;
	php_process_env env;
	zend_string *key, *str;
	char **ep;
	char *p;
	size_t sizeenv = 0;
	HashTable *env_hash; /* temporary PHP array used as helper */

	memset(&env, 0, sizeof(env));

	if (!environment) {
		return env;
	}

	uint32_t cnt = zend_hash_num_elements(Z_ARRVAL_P(environment));

	if (cnt < 1) {
		env.envarray = (char **) ecalloc(1, sizeof(char *));
		env.envp = (char *) ecalloc(4, 1);
		return env;
	}

	ALLOC_HASHTABLE(env_hash);
	zend_hash_init(env_hash, cnt, NULL, NULL, 0);

	/* first, we have to get the size of all the elements in the hash */
	ZEND_HASH_FOREACH_STR_KEY_VAL(Z_ARRVAL_P(environment), key, element) {
		str = zval_get_string(element);

		if (ZSTR_LEN(str) == 0) {
			zend_string_release_ex(str, 0);
			continue;
		}

		sizeenv += ZSTR_LEN(str) + 1;

		if (key && ZSTR_LEN(key)) {
			sizeenv += ZSTR_LEN(key) + 1;
			zend_hash_add_ptr(env_hash, key, str);
		} else {
			zend_hash_next_index_insert_ptr(env_hash, str);
		}
	} ZEND_HASH_FOREACH_END();

	ep = env.envarray = (char **) ecalloc(cnt + 1, sizeof(char *));
	p = env.envp = (char *) ecalloc(sizeenv + 4, 1);

	ZEND_HASH_FOREACH_STR_KEY_PTR(env_hash, key, str) {
		*ep = p;
		++ep;

		if (key) {
			memcpy(p, ZSTR_VAL(key), ZSTR_LEN(key));
			p += ZSTR_LEN(key);
			*p++ = '=';
		}

		memcpy(p, ZSTR_VAL(str), ZSTR_LEN(str));
		p += ZSTR_LEN(str);
		*p++ = '\0';
		zend_string_release_ex(str, 0);
	} ZEND_HASH_FOREACH_END();

	assert((uint32_t)(p - env.envp) <= sizeenv);

	zend_hash_destroy(env_hash);
	FREE_HASHTABLE(env_hash);

	return env;
}
/* }}} */

/* {{{ _php_free_envp
 * Free the structures allocated by `_php_array_to_envp` */
static void _php_free_envp(php_process_env env)
{
	if (env.envarray) {
		efree(env.envarray);
	}
	if (env.envp) {
		efree(env.envp);
	}
}
/* }}} */

/* {{{ proc_open_rsrc_dtor
 * Free `proc` resource, either because all references to it were dropped or because `pclose` or
 * `proc_close` were called */
static void proc_open_rsrc_dtor(zend_resource *rsrc)
{
	php_process_handle *proc = (php_process_handle*)rsrc->ptr;
#if HAVE_SYS_WAIT_H
	int wstatus;
	int waitpid_options = 0;
	pid_t wait_pid;
#endif

	/* Close all handles to avoid a deadlock */
	for (int i = 0; i < proc->npipes; i++) {
		if (proc->pipes[i] != NULL) {
			GC_DELREF(proc->pipes[i]);
			zend_list_close(proc->pipes[i]);
			proc->pipes[i] = NULL;
		}
	}

#if HAVE_SYS_WAIT_H
	if (!FG(pclose_wait)) {
		waitpid_options = WNOHANG;
	}
	do {
		wait_pid = waitpid(proc->child, &wstatus, waitpid_options);
	} while (wait_pid == -1 && errno == EINTR);

	if (wait_pid <= 0) {
		FG(pclose_ret) = -1;
	} else {
		if (WIFEXITED(wstatus)) {
			wstatus = WEXITSTATUS(wstatus);
		}
		FG(pclose_ret) = wstatus;
	}

#else
	FG(pclose_ret) = -1;
#endif

	_php_free_envp(proc->env);
	efree(proc->pipes);
	efree(proc->command);
	efree(proc);
}
/* }}} */

/* {{{ PHP_MINIT_FUNCTION(proc_open) */
PHP_MINIT_FUNCTION(kos_proc_open)
{
	le_proc_open = zend_register_list_destructors_ex(proc_open_rsrc_dtor, NULL, "process",
		module_number);
	return SUCCESS;
}
/* }}} */

/* {{{ Kill a process opened by `proc_open` */
PHP_FUNCTION(kos_proc_terminate)
{
	RETURN_BOOL(true);
}
/* }}} */

/* {{{ Close a process opened by `proc_open` */
PHP_FUNCTION(kos_proc_close)
{
	zval *zproc;
	php_process_handle *proc;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_RESOURCE(zproc)
	ZEND_PARSE_PARAMETERS_END();

	proc = (php_process_handle*)zend_fetch_resource(Z_RES_P(zproc), "process", le_proc_open);
	if (proc == NULL) {
		RETURN_THROWS();
	}

	FG(pclose_wait) = 1; /* See comment in `proc_open_rsrc_dtor` */
	zend_list_close(Z_RES_P(zproc));
	FG(pclose_wait) = 0;
	RETURN_LONG(FG(pclose_ret));
}
/* }}} */

/* {{{ Get information about a process opened by `proc_open` */
PHP_FUNCTION(kos_proc_get_status)
{
	zval *zproc;
	php_process_handle *proc;
	int wstatus;
	pid_t wait_pid = 0;
	int running = 1, signaled = 0, stopped = 0;
	int exitcode = -1, termsig = 0, stopsig = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_RESOURCE(zproc)
	ZEND_PARSE_PARAMETERS_END();

	proc = (php_process_handle*)zend_fetch_resource(Z_RES_P(zproc), "process", le_proc_open);
	if (proc == NULL) {
		RETURN_THROWS();
	}

	array_init(return_value);
	add_assoc_string(return_value, "command", proc->command);
	add_assoc_long(return_value, "pid", (zend_long)proc->child);

    // @todo: TMP
    // wait_pid = waitpid(proc->child, &wstatus, WNOHANG|WUNTRACED);
    // fprintf(stderr, "Our status: %d, wait_pid status: %d\n", g_last_proc_exit_status, wait_pid);
    wstatus = g_last_proc_exit_status;

    // @todo: rework
    close(g_last_cli_socket);
    for (int i = 10; i < 20; ++i) {
        close(i);
    }

	if (wait_pid == proc->child) {
		if (WIFEXITED(wstatus)) {
			running = 0;
			exitcode = WEXITSTATUS(wstatus);
		}
		if (WIFSIGNALED(wstatus)) {
			running = 0;
			signaled = 1;
			termsig = WTERMSIG(wstatus);
		}
	} else if (wait_pid == -1) {
		/* The only error which could occur here is ECHILD, which means that the PID we were
		 * looking for either does not exist or is not a child of this process */
		running = 0;
	}

	add_assoc_bool(return_value, "running", running);
	add_assoc_bool(return_value, "signaled", signaled);
	add_assoc_bool(return_value, "stopped", stopped);
	add_assoc_long(return_value, "exitcode", exitcode);
	add_assoc_long(return_value, "termsig", termsig);
	add_assoc_long(return_value, "stopsig", stopsig);
}
/* }}} */

# define close_descriptor(fd)	close(fd)

/* Determines the type of a descriptor item. */
typedef enum _descriptor_type {
	DESCRIPTOR_TYPE_STD,
	DESCRIPTOR_TYPE_PIPE,
	DESCRIPTOR_TYPE_SOCKET
} descriptor_type;

/* One instance of this struct is created for each item in `$descriptorspec` argument to `proc_open`
 * They are used within `proc_open` and freed before it returns */
typedef struct _descriptorspec_item {
	int index;                       /* desired FD # in child process */
	descriptor_type type;
	php_file_descriptor_t childend;  /* FD # opened for use in child
	                                  * (will be copied to `index` in child) */
	php_file_descriptor_t parentend; /* FD # opened for use in parent
	                                  * (for pipes only; will be 0 otherwise) */
	int mode_flags;                  /* mode for opening FDs: r/o, r/w, binary (on Win32), etc */
} descriptorspec_item;

static zend_string *get_valid_arg_string(zval *zv, int elem_num) {
	zend_string *str = zval_get_string(zv);
	if (!str) {
		return NULL;
	}

	if (strlen(ZSTR_VAL(str)) != ZSTR_LEN(str)) {
		zend_value_error("Command array element %d contains a null byte", elem_num);
		zend_string_release(str);
		return NULL;
	}

	return str;
}

/* Convert command parameter array passed as first argument to `proc_open` into command string */
static char* get_command_from_array(HashTable *array, char ***argv, int num_elems)
{
	zval *arg_zv;
	char *command = NULL;
	int i = 0;

	*argv = safe_emalloc(sizeof(char *), num_elems + 1, 0);

	ZEND_HASH_FOREACH_VAL(array, arg_zv) {
		zend_string *arg_str = get_valid_arg_string(arg_zv, i + 1);
		if (!arg_str) {
			/* Terminate with NULL so exit_fail code knows how many entries to free */
			(*argv)[i] = NULL;
			if (command != NULL) {
				efree(command);
			}
			return NULL;
		}

		if (i == 0) {
			command = estrdup(ZSTR_VAL(arg_str));
		}

		(*argv)[i++] = estrdup(ZSTR_VAL(arg_str));
		zend_string_release(arg_str);
	} ZEND_HASH_FOREACH_END();

	(*argv)[i] = NULL;
	return command;
}

static descriptorspec_item* alloc_descriptor_array(zval *descriptorspec)
{
	int ndescriptors = zend_hash_num_elements(Z_ARRVAL_P(descriptorspec));
	return ecalloc(sizeof(descriptorspec_item), ndescriptors);
}

static zend_string* get_string_parameter(zval *array, int index, char *param_name)
{
	zval *array_item;
	if ((array_item = zend_hash_index_find(Z_ARRVAL_P(array), index)) == NULL) {
		zend_value_error("Missing %s", param_name);
		return NULL;
	}
	return zval_try_get_string(array_item);
}

static int set_proc_descriptor_to_blackhole(descriptorspec_item *desc)
{
	desc->childend = open("/dev/null", O_RDWR);
	if (desc->childend < 0) {
		php_error_docref(NULL, E_WARNING, "Failed to open /dev/null: %s", strerror(errno));
		return FAILURE;
	}
	return SUCCESS;
}

static int set_proc_descriptor_to_pty(descriptorspec_item *desc, int *master_fd, int *slave_fd)
{
	php_error_docref(NULL, E_WARNING, "PTY (pseudoterminal) not supported on this system");
	return FAILURE;
}

/* Mark the descriptor close-on-exec, so it won't be inherited by children */
static php_file_descriptor_t make_descriptor_cloexec(php_file_descriptor_t fd)
{
#if defined(F_SETFD) && defined(FD_CLOEXEC)
	fcntl(fd, F_SETFD, FD_CLOEXEC);
#endif
	return fd;
}

static int set_proc_descriptor_to_pipe(descriptorspec_item *desc, zend_string *zmode)
{
	php_file_descriptor_t newpipe[2];

	if (pipe(newpipe)) {
		php_error_docref(NULL, E_WARNING, "Unable to create pipe %s", strerror(errno));
		return FAILURE;
	}

	desc->type = DESCRIPTOR_TYPE_PIPE;

	if (strncmp(ZSTR_VAL(zmode), "w", 1) != 0) {
		desc->parentend = newpipe[1];
		desc->childend = newpipe[0];
		desc->mode_flags = O_WRONLY;
	} else {
		desc->parentend = newpipe[0];
		desc->childend = newpipe[1];
		desc->mode_flags = O_RDONLY;
	}

	desc->parentend = make_descriptor_cloexec(desc->parentend);

	return SUCCESS;
}

#define create_socketpair(socks) socketpair(AF_UNIX, SOCK_STREAM, 0, (socks))

static int set_proc_descriptor_to_socket(descriptorspec_item *desc)
{
	php_socket_t sock[2];

	if (create_socketpair(sock)) {
		zend_string *err = php_socket_error_str(php_socket_errno());
		php_error_docref(NULL, E_WARNING, "Unable to create socket pair: %s", ZSTR_VAL(err));
		zend_string_release(err);
		return FAILURE;
	}

	desc->type = DESCRIPTOR_TYPE_SOCKET;
	desc->parentend = make_descriptor_cloexec((php_file_descriptor_t) sock[0]);

	/* Pass sock[1] to child because it will never use overlapped IO on Windows. */
	desc->childend = (php_file_descriptor_t) sock[1];

	return SUCCESS;
}

static int set_proc_descriptor_to_file(descriptorspec_item *desc, zend_string *file_path,
	zend_string *file_mode)
{
	php_socket_t fd;

	/* try a wrapper */
	php_stream *stream = php_stream_open_wrapper(ZSTR_VAL(file_path), ZSTR_VAL(file_mode),
		REPORT_ERRORS|STREAM_WILL_CAST, NULL);
	if (stream == NULL) {
		return FAILURE;
	}

	/* force into an fd */
	if (php_stream_cast(stream, PHP_STREAM_CAST_RELEASE|PHP_STREAM_AS_FD, (void **)&fd,
		REPORT_ERRORS) == FAILURE) {
		return FAILURE;
	}

	desc->childend = fd;
	return SUCCESS;
}

static int dup_proc_descriptor(php_file_descriptor_t from, php_file_descriptor_t *to,
	zend_ulong nindex)
{
	// disable creation new descriptor
    // *to = dup(from);
	if (*to < 0) {
		php_error_docref(NULL, E_WARNING, "Failed to dup() for descriptor " ZEND_LONG_FMT ": %s",
			nindex, strerror(errno));
		return FAILURE;
	}
	return SUCCESS;
}

static int redirect_proc_descriptor(descriptorspec_item *desc, int target,
	descriptorspec_item *descriptors, int ndesc, int nindex)
{
	php_file_descriptor_t redirect_to = PHP_INVALID_FD;

	for (int i = 0; i < ndesc; i++) {
		if (descriptors[i].index == target) {
			redirect_to = descriptors[i].childend;
			break;
		}
	}

	if (redirect_to == PHP_INVALID_FD) { /* Didn't find the index we wanted */
		if (target < 0 || target > 2) {
			php_error_docref(NULL, E_WARNING, "Redirection target %d not found", target);
			return FAILURE;
		}

		/* Support referring to a stdin/stdout/stderr pipe adopted from the parent,
		 * which happens whenever an explicit override is not provided. */
		redirect_to = target;
	}

	return dup_proc_descriptor(redirect_to, &desc->childend, nindex);
}

/* Process one item from `$descriptorspec` argument to `proc_open` */
static int set_proc_descriptor_from_array(zval *descitem, descriptorspec_item *descriptors,
	int ndesc, int nindex, int *pty_master_fd, int *pty_slave_fd) {
	zend_string *ztype = get_string_parameter(descitem, 0, "handle qualifier");
	if (!ztype) {
		return FAILURE;
	}

	zend_string *zmode = NULL, *zfile = NULL;
	int retval = FAILURE;
	if (zend_string_equals_literal(ztype, "pipe")) {
		/* Set descriptor to pipe */
		zmode = get_string_parameter(descitem, 1, "mode parameter for 'pipe'");
		if (zmode == NULL) {
			goto finish;
		}
		retval = set_proc_descriptor_to_pipe(&descriptors[ndesc], zmode);
	} else if (zend_string_equals_literal(ztype, "socket")) {
		/* Set descriptor to socketpair */
		retval = set_proc_descriptor_to_socket(&descriptors[ndesc]);
	} else if (zend_string_equals_literal(ztype, "file")) {
		/* Set descriptor to file */
		if ((zfile = get_string_parameter(descitem, 1, "file name parameter for 'file'")) == NULL) {
			goto finish;
		}
		if ((zmode = get_string_parameter(descitem, 2, "mode parameter for 'file'")) == NULL) {
			goto finish;
		}
		retval = set_proc_descriptor_to_file(&descriptors[ndesc], zfile, zmode);
	} else if (zend_string_equals_literal(ztype, "redirect")) {
		/* Redirect descriptor to whatever another descriptor is set to */
		zval *ztarget = zend_hash_index_find_deref(Z_ARRVAL_P(descitem), 1);
		if (!ztarget) {
			zend_value_error("Missing redirection target");
			goto finish;
		}
		if (Z_TYPE_P(ztarget) != IS_LONG) {
			zend_value_error("Redirection target must be of type int, %s given", zend_zval_type_name(ztarget));
			goto finish;
		}

		retval = redirect_proc_descriptor(
			&descriptors[ndesc], (int)Z_LVAL_P(ztarget), descriptors, ndesc, nindex);
	} else if (zend_string_equals_literal(ztype, "null")) {
		/* Set descriptor to blackhole (discard all data written) */
		retval = set_proc_descriptor_to_blackhole(&descriptors[ndesc]);
	} else if (zend_string_equals_literal(ztype, "pty")) {
		/* Set descriptor to slave end of PTY */
		retval = set_proc_descriptor_to_pty(&descriptors[ndesc], pty_master_fd, pty_slave_fd);
	} else {
		php_error_docref(NULL, E_WARNING, "%s is not a valid descriptor spec/mode", ZSTR_VAL(ztype));
		goto finish;
	}

finish:
	if (zmode) zend_string_release(zmode);
	if (zfile) zend_string_release(zfile);
	zend_string_release(ztype);
	return retval;
}

static int set_proc_descriptor_from_resource(zval *resource, descriptorspec_item *desc, int nindex)
{
	/* Should be a stream - try and dup the descriptor */
	php_stream *stream = (php_stream*)zend_fetch_resource(Z_RES_P(resource), "stream",
		php_file_le_stream());
	if (stream == NULL) {
		return FAILURE;
	}

	php_socket_t fd;
	int status = php_stream_cast(stream, PHP_STREAM_AS_FD, (void **)&fd, REPORT_ERRORS);
	if (status == FAILURE) {
		return FAILURE;
	}

	php_file_descriptor_t fd_t = fd;
	if (dup_proc_descriptor(fd_t, &desc->childend, nindex) == FAILURE) {
		return FAILURE;
	}

	return SUCCESS;
}

static int close_parentends_of_pipes(descriptorspec_item *descriptors, int ndesc)
{
	/* We are running in child process
	 * Close the 'parent end' of pipes which were opened before forking/spawning
	 * Also, dup() the child end of all pipes as necessary so they will use the FD
	 * number which the user requested */
	for (int i = 0; i < ndesc; i++) {
		if (descriptors[i].type != DESCRIPTOR_TYPE_STD) {
			close(descriptors[i].parentend);
		}
		if (descriptors[i].childend != descriptors[i].index) {
			if (dup2(descriptors[i].childend, descriptors[i].index) < 0) {
				php_error_docref(NULL, E_WARNING, "Unable to copy file descriptor %d (for pipe) into " \
					"file descriptor %d: %s", descriptors[i].childend, descriptors[i].index, strerror(errno));
				return FAILURE;
			}
			close(descriptors[i].childend);
		}
	}

	return SUCCESS;
}

static void close_all_descriptors(descriptorspec_item *descriptors, int ndesc)
{
	for (int i = 0; i < ndesc; i++) {
		close_descriptor(descriptors[i].childend);
		if (descriptors[i].parentend)
			close_descriptor(descriptors[i].parentend);
	}
}

static void efree_argv(char **argv)
{
	if (argv) {
		char **arg = argv;
		while (*arg != NULL) {
			efree(*arg);
			arg++;
		}
		efree(argv);
	}
}

/* {{{ Execute a command, with specified files used for input/output */
PHP_FUNCTION(kos_proc_open)
{
	zend_string *command_str;
	HashTable *command_ht;
	zval *descriptorspec, *pipes;       /* Mandatory arguments */
	char *cwd = NULL;                                /* Optional argument */
	size_t cwd_len = 0;                              /* Optional argument */
	zval *environment = NULL, *other_options = NULL; /* Optional arguments */

	char *command = NULL;
	php_process_env env;
	int ndesc = 0;
	int i;
	zval *descitem = NULL;
	zend_string *str_index;
	zend_ulong nindex;
	descriptorspec_item *descriptors = NULL;
	char **argv = NULL;
	int pty_master_fd = -1, pty_slave_fd = -1;
	php_process_id_t child;
	php_process_handle *proc;

	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_ARRAY_HT_OR_STR(command_ht, command_str)
		Z_PARAM_ARRAY(descriptorspec)
		Z_PARAM_ZVAL(pipes)
		Z_PARAM_OPTIONAL
		Z_PARAM_STRING_OR_NULL(cwd, cwd_len)
		Z_PARAM_ARRAY_OR_NULL(environment)
		Z_PARAM_ARRAY_OR_NULL(other_options)
	ZEND_PARSE_PARAMETERS_END();

	memset(&env, 0, sizeof(env));

	if (command_ht) {
		uint32_t num_elems = zend_hash_num_elements(command_ht);
		if (num_elems == 0) {
			zend_argument_value_error(1, "must have at least one element");
			RETURN_THROWS();
		}

		command = get_command_from_array(command_ht, &argv, num_elems);
		if (command == NULL) {
			goto exit_fail;
		}
	} else {
		command = estrdup(ZSTR_VAL(command_str));
	}

	if (environment) {
		env = _php_array_to_envp(environment);
	}

	descriptors = alloc_descriptor_array(descriptorspec);

	/* Walk the descriptor spec and set up files/pipes */
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(descriptorspec), nindex, str_index, descitem) {
		if (str_index) {
			zend_argument_value_error(2, "must be an integer indexed array");
			goto exit_fail;
		}

		descriptors[ndesc].index = (int)nindex;

		if (Z_TYPE_P(descitem) == IS_RESOURCE) {
			if (set_proc_descriptor_from_resource(descitem, &descriptors[ndesc], ndesc) == FAILURE) {
				goto exit_fail;
			}
		} else if (Z_TYPE_P(descitem) == IS_ARRAY) {
			if (set_proc_descriptor_from_array(descitem, descriptors, ndesc, (int)nindex,
				&pty_master_fd, &pty_slave_fd) == FAILURE) {
				goto exit_fail;
			}
		} else {
			zend_argument_value_error(2, "must only contain arrays and streams");
			goto exit_fail;
		}
		ndesc++;
	} ZEND_HASH_FOREACH_END();

    // Let's find real command, not `unset` or something else
    char *real_command = NULL;
    char *skip_unset = strstr(command, "Cli_that_not_exist");
    if (skip_unset) {
        real_command = strdup(skip_unset);
    }

    if (NULL == real_command) {
        fprintf(stderr, "FATAL ERROR! Real command not found\n");
        goto exit_fail;
    }

    int cli_sock = create_local_client_socket_and_connect(KOS_TESTING_PORT);
    if (0 > cli_sock) {
        fprintf(stderr, "%s(): Failed to create client's socket: %s\n", __func__, strerror(errno));
        goto next_step;
    } else {
        size_t send_res = send(cli_sock, real_command, strlen(real_command), 0);
        if (0 > send_res) {
            fprintf(stderr, "%s(): Failed to send data: %s\n", __func__, strerror(errno));
            goto next_step;
        }
        char buf_status_code[3] = {0};
        int recv_res = recv(cli_sock, buf_status_code, sizeof(buf_status_code), 0);
        if (0 > recv_res) {
            fprintf(stderr, "%s(): Failed to recv data: %s\n", __func__, strerror(errno));
            goto next_step;
        }
        g_last_proc_exit_status = atoi(buf_status_code);
        g_last_cli_socket = cli_sock;
    }

next_step:

    free(real_command);

	/* We forked/spawned and this is the parent */

	pipes = zend_try_array_init(pipes);
	if (!pipes) {
		goto exit_fail;
	}

	proc = (php_process_handle*) emalloc(sizeof(php_process_handle));
	proc->command = command;
	proc->pipes = emalloc(sizeof(zend_resource *) * ndesc);
	proc->npipes = ndesc;
	proc->child = child;
	proc->env = env;

	/* Clean up all the child ends and then open streams on the parent
	 *   ends, where appropriate */
	for (i = 0; i < ndesc; i++) {
        // @todo: check it for KOS_TESTING
        descriptors[i].type = DESCRIPTOR_TYPE_SOCKET;

		php_stream *stream = NULL;

		close_descriptor(descriptors[i].childend);

		if (descriptors[i].type == DESCRIPTOR_TYPE_PIPE) {
            descriptors[i].type = DESCRIPTOR_TYPE_SOCKET;

			char *mode_string = NULL;

			switch (descriptors[i].mode_flags) {
				case O_WRONLY:
					mode_string = "w";
					break;
				case O_RDONLY:
					mode_string = "r";
					break;
				case O_RDWR:
					mode_string = "r+";
					break;
			}

      if (i == STDOUT_FILENO) {
          stream = php_stream_fopen_from_fd(cli_sock, mode_string, NULL);
      } else {
          stream = php_stream_fopen_from_fd(descriptors[i].parentend, mode_string, NULL);
      }

		} else if (descriptors[i].type == DESCRIPTOR_TYPE_SOCKET) {

      if (i == STDOUT_FILENO) {
          stream = php_stream_sock_open_from_socket((php_socket_t) cli_sock, NULL);
      } else {
          stream = php_stream_sock_open_from_socket((php_socket_t) descriptors[i].parentend, NULL);
      }

		} else {
			proc->pipes[i] = NULL;
		}

		if (stream) {
			zval retfp;

			/* nasty hack; don't copy it */
			stream->flags |= PHP_STREAM_FLAG_NO_SEEK;

			php_stream_to_zval(stream, &retfp);
			add_index_zval(pipes, descriptors[i].index, &retfp);

			proc->pipes[i] = Z_RES(retfp);
			Z_ADDREF(retfp);
		}
	}

	if (1) {
		RETVAL_RES(zend_register_resource(proc, le_proc_open));
	} else {
exit_fail:
		_php_free_envp(env);
		if (command) {
			efree(command);
		}
		RETVAL_FALSE;
	}

	efree_argv(argv);
#if HAVE_OPENPTY
	if (pty_master_fd != -1) {
		close(pty_master_fd);
	}
	if (pty_slave_fd != -1) {
		close(pty_slave_fd);
	}
#endif
	if (descriptors) {
		efree(descriptors);
	}
}
/* }}} */
