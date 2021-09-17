# Compile settings for x86-64 psABI levels.
#
# The psABI defines four levels. Each level includes the instructions from
# all lower levels.
# x86-64: CMOV CX8 FPU FXSR MMX FXSR SCE SSE SSE2
# x86-64-v2: CMPXCHG16B LAHF-SAHF POPCNT SSE3 SSE4 SSE4.1 SSE4.2 SSSE3
# x86-64-v3: AVX AVX2 BMI1 BMI2 F16C FMA LZCNT MOVBE XSAVE
# x86-64-v4: AVX512F AVX512BW AVX512CD AVX512DQ AVX512VL

DEFAULTTUNE ?= "x86-64-v2"

# Include the previous tune to pull in PACKAGE_EXTRA_ARCHS
require conf/machine/include/x86/tune-core2.inc

# Extra tune features
TUNEVALID[x86-64-v2] = "Enable x86-64-v2 psABI specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'x86-64-v2', ' -march=x86-64-v2', '', d)}"

# Extra tune selections
AVAILTUNES += "x86-64-v2"
TUNE_FEATURES:tune-x86-64-v2 = "${TUNE_FEATURES:tune-x86-64} x86-64-v2"
BASE_LIB:tune-x86-64-v2 = "lib64"
TUNE_PKGARCH:tune-x86-64-v2 = "x86-64-v2"
PACKAGE_EXTRA_ARCHS:tune-x86-64-v2 = "${PACKAGE_EXTRA_ARCHS:tune-core2-64} x86-64-v2"
QEMU_EXTRAOPTIONS:x86-64-v2 = " -cpu Haswell,check=false"


TUNEVALID[x86-64-v3] = "Enable x86-64-v3 psABI specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'x86-64-v3', ' -march=x86-64-v3', '', d)}"
AVAILTUNES += "x86-64-v3"
TUNE_FEATURES:tune-x86-64-v3 = "${TUNE_FEATURES:tune-x86-64} x86-64-v3"
BASE_LIB:tune-x86-64-v3 = "lib64"
TUNE_PKGARCH:tune-x86-64-v3 = "x86-64-v3"
PACKAGE_EXTRA_ARCHS:tune-x86-64-v3 = "${PACKAGE_EXTRA_ARCHS:tune-core2-64} x86-64-v3"
QEMU_EXTRAOPTIONS:x86-64-v3 = " -cpu Haswell,check=false"

TUNEVALID[x86-64-v4] = "Enable x86-64-v4 psABI specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'x86-64-v4', ' -march=x86-64-v4', '', d)}"
AVAILTUNES += "x86-64-v4"
TUNE_FEATURES:tune-x86-64-v4 = "${TUNE_FEATURES:tune-x86-64} x86-64-v4"
BASE_LIB:tune-x86-64-v4 = "lib64"
TUNE_PKGARCH:tune-x86-64-v4 = "x86-64-v4"
PACKAGE_EXTRA_ARCHS:tune-x86-64-v4 = "${PACKAGE_EXTRA_ARCHS:tune-core2-64} x86-64-v4"
QEMU_EXTRAOPTIONS:x86-64-v4 = " -cpu Skylake-Server,check=false"
