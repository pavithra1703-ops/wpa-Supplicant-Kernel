#ifndef __COMMON_MACROS_H_
#define __COMMON_MACROS_H_

/* Stub for perror() — replace with kernel log */
#include <linux/printk.h>   // for printk()

/* Undefine any previous ARRAY_SIZE macro to avoid redefinition warning */
#ifdef ARRAY_SIZE
#undef ARRAY_SIZE
#endif

/* Define ARRAY_SIZE macro */
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))


static inline void perror(const char *s)
{
    /* Kernel doesn't have stderr — print to kernel log instead */
    printk(KERN_ERR "perror: %s\n", s ? s : "(null)");
}


#endif /* __COMMON_MACROS_H_ */

