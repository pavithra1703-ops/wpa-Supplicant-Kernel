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


/* Kernel-space replacement for clock_gettime() */
static inline int clock_gettime(int clk_id, struct timespec *ts)
{
    struct timespec64 kts;

    switch (clk_id) {
        case 0: /* CLOCK_REALTIME */
            ktime_get_real_ts64(&kts);
            break;
        case 1: /* CLOCK_MONOTONIC */
            ktime_get_ts64(&kts);
            break;
        default:
            return -1; /* unsupported clock */
    }

    if (ts) {
        ts->tv_sec  = kts.tv_sec;   // map to kernel's timespec members
        ts->tv_nsec = kts.tv_nsec;
    }
    return 0;
}

#endif 
