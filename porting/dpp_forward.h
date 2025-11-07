#ifndef __DPP_FORWARD_H_
#define __DPP_FORWARD_H_

#include <stddef.h>  // for size_t
#include <stdint.h>  // for u8, u16

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


#endif // __DPP_FORWARD_H_

