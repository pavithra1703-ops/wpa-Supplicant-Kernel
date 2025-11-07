#ifndef __DPP_FORWARD1_H_
#define __DPP_FORWARD1_H_

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/* ------------------------------
 * Minimal struct and enum stubs
 * ------------------------------ */

// Stub for wpabuf type
struct wpabuf;

/* DPP authentication context (stub for kernel port) */
struct dpp_authentication {
    void *msg_ctx;
};

/* DPP public action frame type (minimal enum for compilation) */
enum dpp_public_action_frame_type {
    DPP_PA_AUTHENTICATION_REQ = 0,
    DPP_PA_AUTHENTICATION_RESP,
    DPP_PA_CONFIGURATOR_RESP
};

/* DPP bootstrap type enum (for dpp_bootstrap_type_txt) */
enum dpp_bootstrap_type {
    DPP_BOOTSTRAP_QR_CODE = 0,
    DPP_BOOTSTRAP_PKEX,
    DPP_BOOTSTRAP_NFC_URI
};

/* DPP bootstrap info struct (minimal, just to avoid undefined errors) */
struct dpp_bootstrap_info {
    char *uri;
    char *info;
    char *chan;
    char *host;
    char *pk;
    void *pubkey;
    char *configurator_params;

    bool channels_listed;
    size_t num_freq;
    unsigned int freq[16]; // arbitrary size for kernel stub
    uint8_t mac_addr[6];
};

/* ------------------------------
 * Function prototypes
 * ------------------------------ */

void dpp_auth_fail(struct dpp_authentication *auth, const char *txt);
struct wpabuf *dpp_alloc_msg(enum dpp_public_action_frame_type type,
                             size_t len);

void dpp_bootstrap_info_free(struct dpp_bootstrap_info *info);

const char *dpp_bootstrap_type_txt(enum dpp_bootstrap_type type);

int dpp_parse_uri_chan_list(struct dpp_bootstrap_info *bi, const char *uri);
int dpp_parse_uri_mac(struct dpp_bootstrap_info *bi, const char *mac);

/* Add other stub prototypes here if needed by dpp.c */

#endif /* __DPP_FORWARD_H_ */

