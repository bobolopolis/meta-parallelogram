SUMMARY = "Packages to build for parallelogram"

# Some packages get dynamically renamed, so this can't be allarch
PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

RDEPENDS:${PN} = " \
    direwolf \
    git \
    python3 \
    python3-exifread \
    python3-geojson \
    python3-gpxpy \
    python3-imagesize \
    python3-piexif \
    python3-pycodestyle \
    python3-pycparser \
    python3-requests \
    python3-requests-oauthlib \
    python3-tqdm \
    rtlsdr \
"
