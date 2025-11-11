#ifndef __STDLIB_H_
#define __STDLIB_H_

/* Disable WNM entirely for kernel-space build */
#undef CONFIG_WNM
#define CONFIG_WNM 0

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

static inline int atoi(const char *nptr)
{
    return (int)strtol(nptr, NULL, 10);
}


#include "pbkdf2.h"

#include "byteswap.h"

#include "qsort.h"

#include "common_macros.h"

#include "printf.h"

#include "vprintf.h"

#include "timeval.h"

#include "random.h"

#include "env.h"

#include "process.h"

#include "select.h"

#include "aes_encrypt.h"

#include "dpp_forward.h"

#include "crypto_port.h"

#include "wnm_stub.h"

#include "file_ops_stub.h"

#include "hmac_stub.h"


					       
#endif 

