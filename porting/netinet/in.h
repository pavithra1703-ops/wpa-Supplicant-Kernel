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

#endif

