#ifndef __TIME_H_
#define __TIME_H_

#include <linux/delay.h>

/* seconds -> kernel sleep */
static inline void sleep(unsigned int sec)
{
    ssleep(sec);
}

static inline void usleep(unsigned int usec)
{
    udelay(usec);
}

#endif 
