# Use the stronger sha256 for verification.
PACKAGECONFIG_append = " sha256"
PACKAGECONFIG_append = " openssl"
RDEPENDS_${PN} += "wget"
