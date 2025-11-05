#ifndef __PRINTF_H_
#define __PRINTF_H_

#include <linux/kernel.h>  // for printk
#include <linux/types.h>   // for standard types if needed

/* Redirect printf to printk for kernel space */
#define printf(fmt, ...) printk(KERN_INFO fmt, ##__VA_ARGS__)

#endif /* __PRINTF_H_ */

