#ifndef __COMMON_MACROS_H_
#define __COMMON_MACROS_H_

/* Undefine any previous ARRAY_SIZE macro to avoid redefinition warning */
#ifdef ARRAY_SIZE
#undef ARRAY_SIZE
#endif

/* Define ARRAY_SIZE macro */
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

#endif /* __COMMON_MACROS_H_ */

