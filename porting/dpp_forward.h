#ifndef __DPP_FORWARD_H_
#define __DPP_FORWARD_H_

// Forward declaration of the struct
struct dpp_authentication {
    void *msg_ctx;  // stub the type as void*, enough for the kernel port
    // add other fields as needed, with minimal types
};


// Forward declaration of the function
void dpp_auth_fail(struct dpp_authentication *auth, const char *txt);

#endif // __DPP_FORWARD_H_

