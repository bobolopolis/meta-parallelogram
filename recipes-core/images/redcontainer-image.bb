SUMMARY = "The red container image"

IMAGE_FEATURES += "package-management"

IMAGE_INSTALL = " \
    base-files \
    base-passwd \
    ca-certificates \
    ${VIRTUAL-RUNTIME_base-utils} \
    ${VIRTUAL-RUNTIME_login_manager} \
    ${VIRTUAL-RUNTIME_update-alternatives} \
"

IMAGE_LINGUAS = ""

LICENSE = "MIT"

inherit core-image

# Make sure necessary directories exist. These directories are normally
# created by an init system, so must be manually created in a container.
ROOTFS_POSTPROCESS_COMMAND += "fix_container_dirs;"
fix_container_dirs() {
    install -m 1777 -d ${IMAGE_ROOTFS}/${localstatedir}/volatile/tmp
    install -m 0755 -d ${IMAGE_ROOTFS}/${localstatedir}/volatile/log
    install -m 0755 -d ${IMAGE_ROOTFS}/run/lock
}
