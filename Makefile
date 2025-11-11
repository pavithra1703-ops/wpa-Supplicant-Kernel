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
	wpa_supplicant-2.11/wpa_supplicant/twt.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/os_unix.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/eloop.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/wpa_ft.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/sae.o \
	wpa_supplicant-2.11/wpa_supplicant/wnm_sta.o \
	wpa_supplicant-2.11/wpa_supplicant/config_file.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/wpa.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/preauth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/rsn_supp/wpa_ie.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/wpa_common.o \
	wpa_supplicant-2.11/wpa_supplicant/ibss_rsn.o \
	wpa_supplicant-2.11/wpa_supplicant/rrm.o \
	wpa_supplicant-2.11/wpa_supplicant/op_classes.o \
	wpa_supplicant-2.11/wpa_supplicant/wmm_ac.o \
	wpa_supplicant-2.11/wpa_supplicant/robust_av.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eapol_supp/eapol_supp_sm.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_peer/eap_methods.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wpa_auth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/wpa_auth_ie.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/ap/pmksa_cache_auth.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/dragonfly.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/crypto_openssl.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/tls_none.c \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha256-kdf.c \
        wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha256-prf.c \
        wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha256-tlsprf.c \
        wpa_supplicant-2.11/wpa_supplicant/../src/crypto/dh_groups.c \
        wpa_supplicant-2.11/wpa_supplicant/../src/crypto/random.c \
        wpa_supplicant-2.11/wpa_supplicant/../src/common/ctrl_iface_common.c \
        wpa_supplicant-2.11/wpa_supplicant/ctrl_iface.c \
	wpa_supplicant-2.11/wpa_supplicant/ctrl_iface_unix.c \
        wpa_supplicant-2.11/wpa_supplicant/../src/utils/base64.c \
        wpa_supplicant-2.11/wpa_supplicant/sme.c\
	wpa_supplicant-2.11/wpa_supplicant/../src/common/ieee802_11_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/common/hw_features_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/eap_common/eap_common.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/crypto/sha1-prf.o \
	wpa_supplicant-2.11/wpa_supplicant/bgscan_simple.o \
	wpa_supplicant-2.11/wpa_supplicant/bgscan.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_common.o \
	wpa_supplicant-2.11/wpa_supplicant/wpa_supplicant.o \
	wpa_supplicant-2.11/wpa_supplicant/events.o \
	wpa_supplicant-2.11/wpa_supplicant/bssid_ignore.o \
	wpa_supplicant-2.11/wpa_supplicant/wpas_glue.o \
	wpa_supplicant-2.11/wpa_supplicant/scan.o \
	wpa_supplicant-2.11/wpa_supplicant/main.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_capa.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_event.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_monitor.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/driver_nl80211_scan.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/netlink.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/rfkill.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/utils/radiotap.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/linux_ioctl.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/drivers/drivers.o \
	wpa_supplicant-2.11/wpa_supplicant/../src/l2_packet/l2_packet_linux.o \

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
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/binder 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/dbus 
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/wpa_gui-qt4
ccflags-y += -I./wpa_supplicant-2.11/wpa_supplicant/binder

ccflags-y += -I./porting

ccflags-y += -Wno-frame-larger-than
ccflags-y += -Wno-implicit-fallthrough
ccflags-y += -Wno-vla
ccflags-y += -Wno-format
ccflags-y += -Wno-overflow


 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
