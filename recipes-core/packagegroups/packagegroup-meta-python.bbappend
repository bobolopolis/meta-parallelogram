# Requires systemd in DISTRO_FEATURES
RDEPENDS_packagegroup-meta-python3_remove = " \
    python3-blivet \
    python3-pystemd \
"

# Requires directfb or x11 in DISTRO_FEATURES
RDEPENDS_packagegroup-meta-python3_remove = " \
    python3-pyatspi \
"

# Requires pam in DISTRO_FEATURES
RDEPENDS_packagegroup-meta-python3_remove = " \
    pamela \
"

# Requires fortran support in compiler
RDEPENDS_packagegroup-meta-python3_remove = " \
    python3-cvxopt \
"
