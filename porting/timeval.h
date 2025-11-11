#ifndef __TIMEVAL_H_
#define __TIMEVAL_H_

#include <linux/types.h>   // for kernel types

/* Minimal timeval replacement for kernel space */
struct timeval {
    long tv_sec;   /* seconds */
    long tv_usec;  /* microseconds */
};

struct timespec {
    long tv_sec;   /* seconds */
    long tv_nsec;  /* nanoseconds */
};


#endif /* __TIMEVAL_H_ */

