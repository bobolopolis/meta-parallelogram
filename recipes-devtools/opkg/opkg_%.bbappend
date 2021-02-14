# Busybox wget doesn't support https properly. Options are to either use
# GNU wget or curl. curl is a little smaller, so use that.
PACKAGECONFIG ?= " \
    curl \
    libsolv \
    sha256 \
    ssl-curl \
"
