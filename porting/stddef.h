#ifndef __STDDEF_H_
#define __STDDEF_H_

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ long unsigned int
#endif

typedef __SIZE_TYPE__ size_t;

typedef unsigned long size_t;

#endif 
