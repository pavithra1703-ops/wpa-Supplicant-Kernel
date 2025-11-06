#ifndef __TIME_H_
#define __TIME_H_

#include <linux/delay.h>
#include <linux/timekeeping.h>  // for ktime_get_real_ts64
#include "timeval.h"             // your kernel-space timeval

typedef long time_t;   /* equivalent to user-space time_t */

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


/* Minimal kernel-space replacement for mktime() */
static inline time_t mktime(const struct tm *tm)
{
    static const int days_in_month[12] = {
        31,28,31,30,31,30,31,31,30,31,30,31
    };

    int year = tm->tm_year + 1900;
    int month = tm->tm_mon;
    int day = tm->tm_mday;
    int hour = tm->tm_hour;
    int min = tm->tm_min;
    int sec = tm->tm_sec;

    // Days since epoch
    long days = 0;

    // Count years
    for (int y = 1970; y < year; y++) {
        days += 365;
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            days += 1; // leap year
        }
    }

    // Count months
    for (int m = 0; m < month; m++) {
        days += days_in_month[m];
        if (m == 1 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            days += 1; // February in leap year
        }
    }

    days += day - 1;

    return days * 24 * 3600 + hour * 3600 + min * 60 + sec;
}


#endif 
