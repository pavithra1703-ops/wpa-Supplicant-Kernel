#ifndef __SIGNAL_H_
#define __SIGNAL_H_


#include <linux/kernel.h>  // for printk/WARN_ON

/* Signal stubs for kernel-space */
#ifndef SIGALRM 
#define SIGALRM 0
#endif

static inline void (*signal(int signum, void (*handler)(int)))(int)
{
    (void)signum;
    (void)handler;
    printk(KERN_INFO "stub signal() called in kernel-space, ignored\n");
    return NULL;
}


#endif 
