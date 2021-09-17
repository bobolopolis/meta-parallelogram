# Generic x86-64 tune for parallelogram

DEFAULTTUNE ?= "paratunex64"

# Include the previous tune to pull in PACKAGE_EXTRA_ARCHS
require conf/machine/include/x86/tune-core2.inc

# Extra tune features
TUNEVALID[paratunex64] = "Enable generic processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'paratunex64', ' -march=x86-64 -mmmx -msse -msse2 -msse3 -mssse3', '', d)}"

# Extra tune selections
AVAILTUNES += "paratunex64"
TUNE_FEATURES:tune-paratunex64 = "${TUNE_FEATURES:tune-x86-64} paratunex64"
BASE_LIB:tune-paratunex64 = "lib64"
TUNE_PKGARCH:tune-paratunex64 = "paratunex64"
PACKAGE_EXTRA_ARCHS:tune-paratunex64 = "${PACKAGE_EXTRA_ARCHS:tune-core2-64} paratunex64"
QEMU_EXTRAOPTIONS:paratunex64 = " -cpu Nehalem,check=false"
