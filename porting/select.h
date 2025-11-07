#ifndef __SELECT_H_
#define __SELECT_H_

#include <linux/kernel.h>
#include <linux/types.h>

/*
 * The kernel already defines fd_set and related macros.
 * To prevent type conflicts, we check for fd_set directly.
 */


/* Define macros only if missing */
#ifndef FD_ZERO
#define FD_ZERO(set)   do { if (set) (set)->fds_bits[0] = 0; } while (0)
#endif

#ifndef FD_SET
#define FD_SET(fd, set)    do { (void)(fd); (void)(set); } while (0)
#endif

#ifndef FD_CLR
#define FD_CLR(fd, set)    do { (void)(fd); (void)(set); } while (0)
#endif

#ifndef FD_ISSET
#define FD_ISSET(fd, set)  0
#endif

#endif 

