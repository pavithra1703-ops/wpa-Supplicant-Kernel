#ifndef __RANDOM_H_
#define __RANDOM_H_

/* porting_fix.h or porting_random.h */

#include <linux/random.h>

/* Stub random() for kernel builds */
static inline int random(void)
{
    unsigned int val;
    get_random_bytes(&val, sizeof(val));
    return (int)val;
}

#endif

