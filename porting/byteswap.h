#ifndef __BYTESWAP_H_
#define __BYTESWAP_H_

#include <linux/types.h>

/* Minimal kernel-compatible byte swap helpers */

static inline __u32 bswap_32(__u32 x)
{
    return ((x & 0x000000FFU) << 24) |
           ((x & 0x0000FF00U) << 8)  |
           ((x & 0x00FF0000U) >> 8)  |
           ((x & 0xFF000000U) >> 24);
}


#endif 
