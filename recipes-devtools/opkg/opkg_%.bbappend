# Busybox wget doesn't support https properly. Options are to either use
# GNU wget or curl. GNU wget is a little smaller, so use that.
PACKAGECONFIG ?= " \
    libsolv \
    sha256 \
"
RDEPENDS_${PN} += "wget"
