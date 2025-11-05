#ifndef __CTYPE_H_
#define __CTYPE_H_

/* Minimal kernel-compatible replacements for libc ctype functions */

static inline int isspace(int c)
{
    return (c == ' '  || c == '\f' || c == '\n' ||
            c == '\r' || c == '\t' || c == '\v');
}

static inline int isprint(int c)
{
    return (c >= 0x20 && c <= 0x7e);
}

#endif

