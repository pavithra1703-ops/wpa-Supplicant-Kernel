#ifndef __ENV_H_
#define __ENV_H_

#include <linux/kernel.h>

/* Stub setenv: does nothing, returns 0 for success */
static inline int setenv(const char *name, const char *value, int overwrite)
{
    printk(KERN_INFO "stub setenv called: %s=%s, overwrite=%d\n",
           name ? name : "(null)", value ? value : "(null)", overwrite);
    return 0; /* pretend success */
}

/* Stub unsetenv: does nothing, returns 0 for success */
static inline int unsetenv(const char *name)
{
    printk(KERN_INFO "stub unsetenv called: %s\n", name ? name : "(null)");
    return 0; /* pretend success */
}

#endif

