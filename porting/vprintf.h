#ifndef __VPRINTF_H_
#define __VPRINTF_H_

#include <linux/kernel.h>
#include <linux/stdarg.h>

/* Map vprintf to vprintk for kernel-space */
static inline int vprintf(const char *fmt, va_list args)
{
    return vprintk(fmt, args);
}

#endif /* __VPRINTF_H_ */

