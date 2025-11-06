#ifndef __ERRNO_H_
#define __ERRNO_H_

static inline int *errno_ptr(void) { static int e; return &e; }

#define errno (*errno_ptr())


#endif 
