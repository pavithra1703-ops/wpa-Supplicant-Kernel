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

#define AF_INET 2
#define AF_INET6 10


/* IPv4 conversion */
static inline char *inet_ntoa(struct in_addr in)
{
    static char buf[16];
    u8 *p = (u8 *)&in.s_addr;
    snprintf(buf, sizeof(buf), "%u.%u.%u.%u", p[0], p[1], p[2], p[3]);
    return buf;
}

// IPv6 conversion (colon-separated hex)
static inline const char *inet_ntop6(const struct in6_addr *in6, char *buf, size_t buflen)
{
    int i;
    char *pos = buf;
    for (i = 0; i < 16; i += 2) {
        if (i > 0)
            *pos++ = ':';
        pos += snprintf(pos, buflen - (pos - buf), "%x%x", in6->s6_addr[i], in6->s6_addr[i+1]);
    }
    return buf;
}


/* Generic inet_ntop for IPv4 and IPv6 */
static inline const char *inet_ntop(int af, const void *src, char *buf, size_t buflen)
{
    if (!src || !buf || buflen == 0)
        return NULL;

    if (af == AF_INET) {
        struct in_addr in;
        in.s_addr = *(uint32_t *)src;
        return inet_ntoa(in);
    } else if (af == AF_INET6) {
        return inet_ntop6((const struct in6_addr *)src, buf, buflen);
    }
    return NULL;

}

/* Convert string IPv4 to struct in_addr */
static inline int inet_aton(const char *cp, struct in_addr *addr)
{
    unsigned int a, b, c, d;
    if (sscanf(cp, "%u.%u.%u.%u", &a, &b, &c, &d) != 4)
        return 0;  // invalid format

    if (a > 255 || b > 255 || c > 255 || d > 255)
        return 0;  // invalid value

    addr->s_addr = (a << 24) | (b << 16) | (c << 8) | d;
    return 1;  // success
}


#endif

