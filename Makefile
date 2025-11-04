obj-m+=supplicant_driver.o

supplicant_driver-objs:=wpa_supplicant-2.11/wpa_supplicant/config.o \
	wpa_supplicant-2.11/wpa_supplicant/notify.o \
	wpa_supplicant-2.11/wpa_supplicant/bss.o \
	wpa_supplicant-2.11/wpa_supplicant/eap_register.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/config.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/wpa_debug.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/wpabuf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/bitfield.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/ip_addr.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/crc32.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/ptksa_cache.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/pmksa_cache.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/os_unix.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/eloop.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/wpa_ft.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/sae.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp_auth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp_backup.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp_crypto.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp_pkex.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp_reconfig.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dpp_tcp.o \
	wpa_supplicant-2.11/wpa_supplicant/dpp_supplicant.o \
	wpa_supplicant-2.11/wpa_supplicant/wnm_sta.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/tdls.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/wpa.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/preauth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/wpa_ie.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/wpa_common.o \
	wpa_supplicant-2.11/wpa_supplicant/ibss_rsn.o \
	wpa_supplicant-2.11/wpa_supplicant/p2p_supplicant.o \
	wpa_supplicant-2.11/wpa_supplicant/p2p_supplicant_sd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_utils.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_parse.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_build.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_go_neg.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_sd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_pd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_invitation.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_dev_disc.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/p2p/p2p_group.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/p2p_hostapd.o \
	wpa_supplicant-2.11/wpa_supplicant/wifi_display.o \
	wpa_supplicant-2.11/wpa_supplicant/hs20_supplicant.o \
	wpa_supplicant-2.11/wpa_supplicant/interworking.o \
	wpa_supplicant-2.11/wpa_supplicant/rrm.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/rrm.o \
	wpa_supplicant-2.11/wpa_supplicant/op_classes.o \
	wpa_supplicant-2.11/wpa_supplicant/wmm_ac.o \
	wpa_supplicant-2.11/wpa_supplicant/robust_av.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_tls.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_peap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_peap_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_ttls.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_md5.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_mschapv2.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/mschapv2.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_gtc.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_otp.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_leap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_fast.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_fast_pac.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_fast_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_pax.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_pax_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_sake.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_sake_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_gpsk.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_gpsk_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_pwd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_pwd_common.o \
	wpa_supplicant-2.11/wpa_supplicant/wps_supplicant.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/uuid.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_wsc.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_wsc_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_attr_parse.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_attr_build.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_attr_process.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_dev_attr.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_enrollee.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/wps/wps_registrar.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_ikev2.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/ikev2.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_ikev2_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/ikev2_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_tnc.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/tncc.o \
	wpa_supplicant-2.11/wpa_supplicant/wpas_kay.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/pae/ieee802_1x_cp.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/pae/ieee802_1x_kay.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/pae/ieee802_1x_key.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/pae/ieee802_1x_secy_ops.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wpa_auth_kay.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eapol_supp/eapol_supp_sm.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_methods.o \
	wpa_supplicant-2.11/wpa_supplicant/ap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/hostapd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wpa_auth_glue.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/utils.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/authsrv.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ap_config.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/sta_info.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/tkip_countermeasures.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ap_mlme.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_1x.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eapol_auth/eapol_auth_sm.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_11_auth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_11_shared.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/drv_callbacks.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ap_drv_ops.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/beacon.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/bss_load.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/eap_user_db.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/neighbor_db.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_11_ht.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_11_vht.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_11_he.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ctrl_iface_ap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_server/eap_server.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_server/eap_server_identity.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_server/eap_server_methods.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wmm.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ap_list.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/comeback_token.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/pasn/pasn_responder.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/ieee802_11.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/hw_features.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/dfs.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wps_hostapd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_server/eap_server_wsc.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/dpp_hostapd.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/gas_query_ap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/gas_serv.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/hs20.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wpa_auth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wpa_auth_ie.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/pmksa_cache_auth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dragonfly.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/ms_funcs.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/chap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_tls_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/tls_openssl.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/tls_openssl_ocsp.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/crypto_openssl.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/aes-siv.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/aes-ctr.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/aes-encblock.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha256-kdf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha384-kdf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha512-kdf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha256-prf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha256-tlsprf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha384-prf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha512-prf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/tls/asn1.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/dh_groups.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/random.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/ctrl_iface_common.o \
	wpa_supplicant-2.11/wpa_supplicant/ctrl_iface.o \
	wpa_supplicant-2.11/wpa_supplicant/ctrl_iface_unix.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_dict_helpers.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_new_helpers.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_new.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_new_handlers.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_common.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_new_handlers_wps.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_new_handlers_p2p.o \
	wpa_supplicant-2.11/wpa_supplicant/dbus/dbus_new_introspect.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/base64.o \
	wpa_supplicant-2.11/wpa_supplicant/sme.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/ieee802_11_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/hw_features_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha1-prf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha1-tprf.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha1-tlsprf.o \
	wpa_supplicant-2.11/wpa_supplicant/bgscan_simple.o \
	wpa_supplicant-2.11/wpa_supplicant/bgscan.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/gas_server.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/gas.o \
	wpa_supplicant-2.11/wpa_supplicant/gas_query.o \
	wpa_supplicant-2.11/wpa_supplicant/offchannel.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/json.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_common.o \
	wpa_supplicant-2.11/wpa_supplicant/wpa_supplicant.o \
	wpa_supplicant-2.11/wpa_supplicant/events.o \
	wpa_supplicant-2.11/wpa_supplicant/bssid_ignore.o \
	wpa_supplicant-2.11/wpa_supplicant/wpas_glue.o \
	wpa_supplicant-2.11/wpa_supplicant/scan.o \
	wpa_supplicant-2.11/wpa_supplicant/main.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_wired.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_macsec_linux.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_wired_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_capa.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_event.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_monitor.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_scan.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/netlink.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/rfkill.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/radiotap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/linux_ioctl.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_wext.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/drivers.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/l2_packet/l2_packet_linux.o \
	wpa_supplicant-2.11/wpa_supplicant/wpa_cli.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/wpa_ctrl.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/cli.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/edit_simple.o \
	wpa_supplicant-2.11/wpa_supplicant/wpa_passphrase.o \
	wpa_supplicant-2.11/wpa_supplicant/twt.o \

ccflags-y += -I./wpa_supplicant-2.11/src/utils
ccflags-y += -I./wpa_supplicant-2.11/src
ccflags-y += -I./wpa_supplicant-2.11/hs20/client 
ccflags-y += -I./wpa_supplicant-2.11/src/ap 
ccflags-y += -I./wpa_supplicant-2.11/src/common 
ccflags-y += -I./wpa_supplicant-2.11/src/crypto 
ccflags-y += -I./wpa_supplicant-2.11/src/drivers 
ccflags-y += -I./wpa_supplicant-2.11/src/eap_common 
ccflags-y += -I./wpa_supplicant-2.11/src/eapol_auth 
ccflags-y += -I./wpa_supplicant-2.11/src/eapol_supp 
ccflags-y += -I./wpa_supplicant-2.11/src/eap_peer 
ccflags-y += -I./wpa_supplicant-2.11/src/eap_server 
ccflags-y += -I./wpa_supplicant-2.11/src/fst 
ccflags-y += -I./wpa_supplicant-2.11/src/l2_packet 
ccflags-y += -I./wpa_supplicant-2.11/src/p2p 
ccflags-y += -I./wpa_supplicant-2.11/src/pae 
ccflags-y += -I./wpa_supplicant-2.11/src/pasn 
ccflags-y += -I./wpa_supplicant-2.11/src/radius 
ccflags-y += -I./wpa_supplicant-2.11/src/rsn_supp 
ccflags-y += -I./wpa_supplicant-2.11/src/tls 
ccflags-y += -I./wpa_supplicant-2.11/src/utils 
ccflags-y += -I./wpa_supplicant-2.11/src/wps 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/binder 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/dbus 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/wpa_gui-qt4

ccflags-y += -I./porting

 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
