#ifndef __STDIO_H_
#define __STDIO_H_

typedef void  FILE;

/* Minimal stub for fgets */
static inline char *fgets(char *buf, int size, void *stream)
{
    /* Kernel cannot read from FILE*, so return NULL */
    return NULL;
}

#endif 
