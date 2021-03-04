FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += "file://redcontainer.cfg"

# openssl is needed for busybox wget to handle https
RDEPENDS_${PN} += "openssl"
