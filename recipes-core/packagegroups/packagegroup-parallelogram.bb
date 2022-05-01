SUMMARY = "Packages to build for parallelogram"

# Some packages get dynamically renamed, so this can't be allarch
PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

RDEPENDS:${PN} = " \
    direwolf \
    rtlsdr \
"
