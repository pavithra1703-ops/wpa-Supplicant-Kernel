#ifndef __UNISTD_H_
#define __UNISTD_H_

#include <linux/sched.h>   // for current and task_struct
#include <linux/kernel.h>

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


/* Stub unlink() for kernel-space */
static inline int unlink(const char *pathname)
{
    printk(KERN_INFO "stub unlink called on: %s\n", pathname ? pathname : "(null)");
    return 0;  /* pretend success */
}

/* porting/unistd.h or stdlib.h */
static inline char *getcwd(char *buf, size_t size)
{
    // Kernel has no cwd; optionally copy a fixed string
    if (buf && size > 0) {
        buf[0] = '/';
        buf[1] = '\0';
        return buf;
    }
    return NULL;
}

#endif 
