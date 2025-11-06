#ifndef __PROCESS_H_
#define __PROCESS_H_



#include <linux/kernel.h>  /* for printk */

/* Stub fork: always return 0 (child process) */
static inline int fork(void)
{
    printk(KERN_INFO "stub fork()\n");
    return 0;
}

/* Stub execv: do nothing */
static inline int execv(const char *path, char *const argv[])
{
    printk(KERN_INFO "stub execv(%s, %p)\n", path ? path : "(null)", argv);
    return 0;
}

/* Stub exit: do nothing */
static inline void exit(int status)
{
    printk(KERN_INFO "stub exit(%d)\n", status);
    /* in kernel you might want to do nothing */
}

/* Stub for waitpid (cannot wait in kernel) */
static inline int waitpid(int pid, int *status, int options)
{
    printk(KERN_INFO "kernel stub: waitpid(%d) called\n", pid);
    if (status)
        *status = 0;
    return pid; /* pretend success */
}



#endif 
