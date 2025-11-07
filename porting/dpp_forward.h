#ifndef __DPP_FORWARD_H_
#define __DPP_FORWARD_H_

#include <stddef.h>  // for size_t
#include <stdint.h>  // for u8, u16


// Minimal DPP attribute IDs
#define DPP_ATTR_WRAPPED_DATA 1
#define DPP_ATTR_AUTHENTICATOR 2
#define DPP_ATTR_BOOTSTRAP_KEY_HASH 3

struct dpp_authentication {
    void *msg_ctx;
};

struct wpabuf;

enum dpp_public_action_frame_type {
    DPP_PA_AUTHENTICATION_REQ = 0, // minimal definition just to compile
};

void dpp_auth_fail(struct dpp_authentication *auth, const char *txt);
struct wpabuf *dpp_alloc_msg(enum dpp_public_action_frame_type type,
                             size_t len);

// Add missing prototypes to fix -Wmissing-prototypes warnings
const uint8_t *dpp_get_attr(const uint8_t *buf, size_t len,
                            uint16_t req_id, uint16_t *ret_len);

int dpp_check_attrs(const uint8_t *buf, size_t len);

// Forward declaration of dpp_bootstrap_info struct
struct dpp_bootstrap_info;

// Forward declaration of function
void dpp_bootstrap_info_free(struct dpp_bootstrap_info *info);



#endif // __DPP_FORWARD_H_

