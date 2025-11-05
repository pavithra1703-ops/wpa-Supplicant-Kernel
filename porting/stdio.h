#ifndef __STDIO_H_
#define __STDIO_H_

typedef void  FILE;

/* Minimal stub for fgets */
static inline char *fgets(char *buf, int size, void *stream)
{
    /* Kernel cannot read from FILE*, so return NULL */
    return NULL;
}

static inline int setvbuf(void *stream, char *buf, int mode, size_t size)
{
    return 0;
}


#endif 
