# Compile settings for an x86 container. Enables additional instruction
# sets via -march to target most modern CPUs made in the last 10-15 years.

DEFAULTTUNE ?= "redx86-64"

# Include the previous tune to pull in PACKAGE_EXTRA_ARCHS
require conf/machine/include/tune-core2.inc

# Extra tune features
TUNEVALID[redx86] = "Enable parallelogram container specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'redx86', ' -march=x86-64 -mtune=generic -mfpmath=sse -mmmx -msse -msse2 -msse3 -mssse3', '', d)}"

# Extra tune selections
AVAILTUNES += "redx86-64"
TUNE_FEATURES_tune-redx86-64 = "${TUNE_FEATURES_tune-x86-64} redx86"
BASE_LIB_tune-redx86-64 = "lib64"
TUNE_PKGARCH_tune-redx86-64 = "redx86-64"
PACKAGE_EXTRA_ARCHS_tune-redx86-64 = "${PACKAGE_EXTRA_ARCHS_tune-core2-64} redx86-64"
QEMU_EXTRAOPTIONS_tune-redx86-64 = " -cpu SandyBridge,check=false"
