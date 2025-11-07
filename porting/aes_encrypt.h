#ifndef __AES_ENCRYPT_H_
#define __AES_ENCRYPT_H_

#include <crypto/aes.h>

#undef aes_encrypt
#undef aes_decrypt
#define aes_encrypt wpa_aes_encrypt
#define aes_decrypt wpa_aes_decrypt

static inline int wpa_aes_encrypt(void *ctx, const u8 *plain, u8 *crypt)
{
    (void)ctx; (void)plain; (void)crypt;
    printk(KERN_INFO "stub wpa_aes_encrypt called\n");
    return 0;
}

static inline int wpa_aes_decrypt(void *ctx, const u8 *crypt, u8 *plain)
{
    (void)ctx; (void)crypt; (void)plain;
    printk(KERN_INFO "stub wpa_aes_decrypt called\n");
    return 0;
}

#endif


