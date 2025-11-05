#ifndef __STDLIB_H_
#define __STDLIB_H_

/*
 * Minimal stdlib.h for kernel-space build of user-space code.
 * Replaces libc memory allocation calls with kernel equivalents.
 */

#include <linux/slab.h>  /* for kmalloc, kfree, krealloc */

/* Map libc allocation to kernel equivalents */
#define malloc(size)        kmalloc((size), GFP_KERNEL)
#define calloc(n, size)     kzalloc((n) * (size), GFP_KERNEL)
#define free(ptr)           kfree((ptr))
#define realloc(ptr, size)  krealloc((ptr), (size), GFP_KERNEL)
#define strdup(s) kstrdup((s), GFP_KERNEL)

/* Define NULL if not already defined */
#ifndef NULL
#define NULL ((void *)0)
#endif

#include <linux/kernel.h>  // for kstrtol
#include <linux/string.h>  // for strlen

static inline long strtol(const char *nptr, char **endptr, int base)
{
    long val;
    int ret;

    ret = kstrtol(nptr, base, &val);
    if (ret < 0) {
        if (endptr)
            *endptr = (char *)nptr;
        return 0;
    }

    if (endptr) {
        const char *p = nptr;
        while (*p) {
            char c = *p;
            if ((c >= '0' && c <= '9') ||
                (base > 10 && ((c >= 'a' && c < 'a'+base-10) || (c >= 'A' && c < 'A'+base-10)))) {
                p++;
            } else {
                break;
            }
        }
        *endptr = (char *)p;
    }
    return val;
}



#endif 

