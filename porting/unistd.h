#ifndef __UNISTD_H_
#define __UNISTD_H_

/* Stub for daemon() — kernel-space no-op */
static inline int daemon(int nochdir, int noclose)
{
    /* In kernel-space, there’s no concept of daemonizing — just ignore */
    return 0;
}


#endif 
