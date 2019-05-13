#ifndef ECHO_SERVER_H
#define ECHO_SERVER_H

#include <linux/types.h>
#include <linux/workqueue.h>
#include <net/sock.h>

struct echo_server_param {
    struct socket *listen_sock;
    struct workqueue_struct *wq;
    struct work_struct work;
};

struct echo_server_work {
    struct socket *connect_sock;
    struct work_struct work;
};


extern int echo_server_daemon(void *);

#endif
