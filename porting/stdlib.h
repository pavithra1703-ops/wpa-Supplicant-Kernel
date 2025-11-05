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

/* Define NULL if not already defined */
#ifndef NULL
#define NULL ((void *)0)
#endif

#endif 

