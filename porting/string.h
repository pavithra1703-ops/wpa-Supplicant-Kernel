#ifndef __STRING_H_
#define __STRING_H_


#include <linux/kernel.h>  // for printk

static inline const char *strerror(int errnum)
{
    // Kernel cannot map errno to string in same way as user-space
    printk(KERN_INFO "strerror(%d) called in kernel-space\n", errnum);
    return "kernel-space stub";
}


#endif 
