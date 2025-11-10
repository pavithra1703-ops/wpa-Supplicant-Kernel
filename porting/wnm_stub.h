/* wnm_stub.h - Kernel-space stub to prevent wnm_btm_reset redefinition */

#ifndef WNM_STUB_H
#define WNM_STUB_H

/* Forward declaration of struct wpa_supplicant */
struct wpa_supplicant;

/* Replace any call to wnm_btm_reset with nothing to avoid redefinition */
#define wnm_btm_reset(wpa_s)   /* nothing */

#endif /* WNM_STUB_H */

