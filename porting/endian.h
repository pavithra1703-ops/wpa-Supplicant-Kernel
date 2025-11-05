#ifndef __ENDIAN_H_
#define __ENDIAN_H_

#include <asm/byteorder.h>   /* Correct for kernel space */

/*
 * Define user-space style endian macros
 * using kernel equivalents.
 */
#ifndef __LITTLE_ENDIAN
#define __LITTLE_ENDIAN 1234
#endif

#ifndef __BIG_ENDIAN
#define __BIG_ENDIAN 4321
#endif

#ifndef __BYTE_ORDER
#ifdef __LITTLE_ENDIAN_BITFIELD
#define __BYTE_ORDER __LITTLE_ENDIAN
#else
#define __BYTE_ORDER __BIG_ENDIAN
#endif
#endif

#endif 

