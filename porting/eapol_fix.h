#ifndef __EAPOL_FIX_H
#define __EAPOL_FIX_H

#include "../wpa_supplicant-2.11/src/eapol_supp/eapol_supp_sm.h"

/* Step 2: declare your own renamed function */
void my_porting_eapol_sm_step(struct eapol_sm *sm);

/* Step 3: redirect all further eapol_sm_step calls to your version */
#define eapol_sm_step my_porting_eapol_sm_step


struct eap_sm;  // forward declaration

// Dummy implementations
static inline int eap_peer_sm_step(struct eap_sm *sm)
{
    // For porting: do nothing, return 0 (success)
    return 0;
}

static inline int eap_peer_was_failure_expected(struct eap_sm *sm)
{
    // Always return false (no failure expected)
    return 0;
}

#endif // PORTING_EAPOL_STEP_FIX

