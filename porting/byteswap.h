#ifndef __BYTESWAP_H_
#define __BYTESWAP_H_

#include <linux/types.h>

/* Minimal kernel-compatible byte swap helpers */

static inline __u16 bswap_16(__u16 x)
{
    return (x >> 8) | (x << 8);
}

static inline __u32 bswap_32(__u32 x)
{
    return ((x & 0x000000FFU) << 24) |
           ((x & 0x0000FF00U) << 8)  |
           ((x & 0x00FF0000U) >> 8)  |
           ((x & 0xFF000000U) >> 24);
}

static inline __u64 bswap_64(__u64 x)
{
    return ((x & 0x00000000000000FFULL) << 56) |
           ((x & 0x000000000000FF00ULL) << 40) |
           ((x & 0x0000000000FF0000ULL) << 24) |
           ((x & 0x00000000FF000000ULL) << 8)  |
           ((x & 0x000000FF00000000ULL) >> 8)  |
           ((x & 0x0000FF0000000000ULL) >> 24) |
           ((x & 0x00FF000000000000ULL) >> 40) |
           ((x & 0xFF00000000000000ULL) >> 56);
}



#endif 
