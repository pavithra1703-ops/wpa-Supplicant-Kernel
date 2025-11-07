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


/* Stub alarm() function */
static inline unsigned int alarm(unsigned int seconds)
{
    printk(KERN_INFO "stub alarm(%u) called in kernel-space, ignored\n", seconds);
    return 0;  // return previous alarm (0 = none)
}

#endif 
