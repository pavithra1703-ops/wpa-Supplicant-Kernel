#ifndef __NETINET_IN_H_
#define __NETINET_IN_H_

#include <stdint.h>  // for uint32_t

// IPv4
struct in_addr {
    uint32_t s_addr;
};

// IPv6
struct in6_addr {
    unsigned char s6_addr[16];
};

static inline char *inet_ntoa(struct in_addr in)
{
    static char buf[16];
    u8 *p = (u8 *)&in.s_addr;
    snprintf(buf, sizeof(buf), "%u.%u.%u.%u", p[0], p[1], p[2], p[3]);
    return buf;
}

#define AF_INET 2
#define AF_INET6 10

#endif

