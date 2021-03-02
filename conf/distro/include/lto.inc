# Include this file in a distro to enable link-time optimization. Some
# packages are not compatible with LTO, disable it where needed.

LTO_pn-apache2 = ""
LTO_pn-apr = ""
LTO_pn-binutils = ""
LTO_pn-busybox = ""
LTO_pn-curl = ""
LTO_pn-elfutils = ""
LTO_pn-gcc-runtime = ""
LTO_pn-glibc = ""
LTO_pn-go-runtime = ""
LTO_pn-libaio = ""
LTO_pn-libgcc = ""
LTO_pn-libgcc-initial = ""
LTO_pn-libsolv = ""
LTO_pn-libxcrypt = ""
LTO_pn-mariadb = ""
LTO_pn-perl = ""
LTO_pn-pkgconf = ""
LTO_pn-valgrind = ""

LTO ?= "-flto"

SELECTED_OPTIMIZATION_append_class-target = " ${LTO}"
SELECTED_OPTIMIZATION[vardeps] += "LTO"
TARGET_LDFLAGS_append_class-target = " ${LTO}"
