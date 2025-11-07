#ifndef __DPP_FORWARD_H_
#define __DPP_FORWARD_H_

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

#endif // __DPP_FORWARD_H_

