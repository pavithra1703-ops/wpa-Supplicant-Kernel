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

/* Stub for srandom() */
static inline void srandom(unsigned int seed)
{
    /* Do nothing, kernel RNG handled differently */
    printk(KERN_INFO "stub srandom called with seed=%u\n", seed);
}


static inline void random_init_stub(const char *entropy_file)
{
    /* Kernel-space: ignore the entropy_file */
    (void)entropy_file;
}

#ifdef __KERNEL__
#define random_init random_init_stub
#endif


#endif

