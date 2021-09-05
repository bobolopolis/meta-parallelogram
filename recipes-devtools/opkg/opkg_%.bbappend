# Use the stronger sha256 for verification.
PACKAGECONFIG:append = " sha256"
# Busybox wget is weird with https, use GNU wget
RDEPENDS:${PN} += "wget"
