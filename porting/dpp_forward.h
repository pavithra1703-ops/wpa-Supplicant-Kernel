#ifndef __DPP_FORWARD1_H_
#define __DPP_FORWARD1_H_

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include "stdlib.h"


/* ------------------------------
 * Minimal struct and enum stubs
 * ------------------------------ */


struct dpp_host {
    int af;   /* Address family: AF_INET, AF_INET6, etc. */
};


/* DPP bootstrap info struct (minimal, just to avoid undefined errors) */
struct dpp_bootstrap_info {
    char *uri;
    char *info;
    char *chan;
    struct hostapd_ip_addr *host;
    char *pk;
    void *pubkey;
    void *configurator_params;

    bool channels_listed;
    size_t num_freq;
    unsigned int freq[16]; // arbitrary size for kernel stub
    uint8_t mac_addr[6];

    unsigned int supported_curves;
    int port;
    int af;
};


/* DPP authentication context (stub for kernel port) */
struct dpp_authentication {
    void *msg_ctx;

    /* Fields needed for dpp_channel_intersect */
    struct dpp_bootstrap_info *peer_bi;
    unsigned int freq[50];
    unsigned int num_freq;
    unsigned int curr_freq;
    unsigned int freq_idx;        /* Index for iterating over freq[] */
   
     
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

/* New dummy enum for status */
enum dpp_status_error {
    DPP_STATUS_OK,
    DPP_STATUS_ERROR_GENERIC,
    DPP_STATUS_ERROR_AUTH,
    DPP_STATUS_ERROR_CONFIG
};

struct wpa_ip_addr {
    int dummy; // minimal placeholder for compilation
};



#define DPP_TCP_PORT 8888  // arbitrary placeholder value for compilation
#define DPP_ATTR_WRAPPED_DATA 0x05      // arbitrary value for compilation
#define DPP_BOOTSTRAP_MAX_FREQ 16       // match size of freq array
#define DPP_ATTR_STATUS 2  // assign a value; it just needs to exist for compilation
#define DPP_ATTR_R_BOOTSTRAP_KEY_HASH      3  // Assign the original value from upstream
#define DPP_VERSION 3  /* needed for compilation */

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
int dpp_parse_uri_info(struct dpp_bootstrap_info *bi, const char *info);       /* add this */
int dpp_parse_uri_version(struct dpp_bootstrap_info *bi, const char *version); /* add this */

static inline int dpp_get_subject_public_key(struct dpp_bootstrap_info *bi,
                                             const u8 *data, size_t data_len) {
    (void)bi; (void)data; (void)data_len;
    return 0;
}
/* Add other stub prototypes here if needed by dpp.c */


/* dpp attribute helpers */
typedef uint8_t u8;
typedef uint16_t u16;

const u8 *dpp_get_attr(const u8 *buf, size_t len, u16 req_id, u16 *ret_len);
int dpp_check_attrs(const u8 *buf, size_t len);

struct dpp_global;   /* forward declaration */


/* Declare prototypes of functions implemented in dpp.c */
void dpp_build_attr_status(struct wpabuf *msg, enum dpp_status_error status);
void dpp_build_attr_r_bootstrap_key_hash(struct wpabuf *msg, const u8 *hash);
int dpp_gen_uri(struct dpp_bootstrap_info *bi);
struct dpp_authentication *dpp_alloc_auth(struct dpp_global *dpp, void *msg_ctx);

struct hostapd_hw_modes;  /* forward declaration */

int dpp_prepare_channel_list(struct dpp_authentication *auth,
                             unsigned int opclass,
                             struct hostapd_hw_modes *modes,
                             u16 num_modes);


#endif /* __DPP_FORWARD_H_ */

