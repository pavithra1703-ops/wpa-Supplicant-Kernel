#ifndef __TIME_H_
#define __TIME_H_

#include <linux/delay.h>
#include <linux/timekeeping.h>  // for ktime_get_real_ts64
#include "timeval.h"             // your kernel-space timeval

/* seconds -> kernel sleep */
static inline void sleep(unsigned int sec)
{
    ssleep(sec);
}

static inline void usleep(unsigned int usec)
{
    udelay(usec);
}



/* Kernel-space replacement for gettimeofday() */
static inline int gettimeofday(struct timeval *tv, void *tz)
{
    struct timespec64 ts;
    ktime_get_real_ts64(&ts);
    if (tv) {
        tv->tv_sec  = ts.tv_sec;
        tv->tv_usec = ts.tv_nsec / 1000;
    }
    return 0;
}



#endif 
