#ifndef __STDIO_H_
#define __STDIO_H_

typedef void  FILE;

#include <linux/printk.h>

/* Stub fread() for kernel space */
static inline size_t fread(void *ptr, size_t size, size_t nmemb, void *stream)
{
    printk(KERN_INFO "stub fread called: size=%zu nmemb=%zu\n", size, nmemb);
    return nmemb;  // pretend we read everything
}

/* Stub fopen/fclose/fprintf to satisfy linker */
static inline FILE *fopen(const char *path, const char *mode)
{
    printk(KERN_INFO "stub fopen(%s, %s)\n", path ? path : "(null)", mode ? mode : "(null)");
    return NULL;   /* pretend failure or no file created */
}

static inline int fclose(FILE *f)
{
    return 0;
}

static inline int fprintf(FILE *f, const char *fmt, ...)
{
    /* no output, just return 0 to keep caller happy */
    return 0;
}

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

/* Define stdout as NULL to avoid undeclared variable errors */
#ifndef stdout
#define stdout NULL
#endif

/* Stub macros for buffering modes */
#ifndef _IOLBF
#define _IOLBF 0
#endif

#endif 
