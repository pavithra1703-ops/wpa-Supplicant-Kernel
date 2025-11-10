#ifndef CRYPTO_PORT_H
#define CRYPTO_PORT_H

/* Define SHA256 output length */
#ifndef SHA256_MAC_LEN
#define SHA256_MAC_LEN 32
#endif

/* You can add other constants later if needed */
#ifndef SHA384_MAC_LEN
#define SHA384_MAC_LEN 48
#endif

#ifndef SHA512_MAC_LEN
#define SHA512_MAC_LEN 64
#endif

#endif /* CRYPTO_PORT_H */

