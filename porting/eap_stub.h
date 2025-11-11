#ifndef __EAP_STUB_H
#define __EAP_STUB_H

struct eap_sm;
struct wpabuf;

int eap_key_available(struct eap_sm *sm);
struct wpabuf * eap_get_eapRespData(struct eap_sm *sm);
void eap_sm_abort(struct eap_sm *sm);

#endif /* PORTING_EAP_STUB_H */

