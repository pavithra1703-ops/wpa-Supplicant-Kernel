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

/* Stub hmac_sha1 for kernel-space */
static inline int hmac_sha1(const u8 *key, size_t key_len,
                            const u8 *data, size_t data_len, u8 *mac)
{
    if (mac)
        memset(mac, 0, 20);  /* 20 bytes for SHA1 */
    return 0; /* pretend success */
}

/* Define constants used by user-space code */
#define MD5_MAC_LEN 16
#define SHA1_MAC_LEN 20

#endif /* __HMAC_STUB_H */

