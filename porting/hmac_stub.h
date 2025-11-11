#ifndef __HMAC_STUB_H
#define __HMAC_STUB_H

#include <linux/types.h>
#include <string.h>

/* Stub hmac_md5 for kernel-space */
static inline int hmac_md5(const u8 *key, size_t key_len,
                           const u8 *data, size_t data_len, u8 *mac)
{
    if (mac)
        memset(mac, 0, 16);  /* fill with zeros */
    return 0; /* pretend success */
}

#endif /* __HMAC_STUB_H */

