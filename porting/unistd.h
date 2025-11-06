#ifndef __UNISTD_H_
#define __UNISTD_H_

#include <linux/sched.h>   // for current and task_struct

/* Stub for daemon() — kernel-space no-op */
static inline int daemon(int nochdir, int noclose)
{
    /* In kernel-space, there’s no concept of daemonizing — just ignore */
    return 0;
}



/* Stub for getpid() in kernel space */
static inline int getpid(void)
{
    return current->pid;   // kernel-space PID of current task
}

#endif 
