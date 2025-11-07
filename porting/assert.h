#ifndef __ASSERT_H_
#define __ASSERT_H_

#include <linux/kernel.h>  /* for printk */

/*
 * Stub assert() for kernel builds
 * In kernel space, we just print a warning if the condition fails.
 */
#define assert(expr) \
    do { \
        if (!(expr)) { \
            printk(KERN_WARNING "Assertion failed: %s, in %s:%d\n", \
                   #expr, __FILE__, __LINE__); \
        } \
    } while (0)

#endif 

