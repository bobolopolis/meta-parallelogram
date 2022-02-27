SUMMARY = "Packages to build for parallelogram"

# Some packages get dynamically renamed, so this can't be allarch
PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

RDEPENDS:${PN} = " \
    apache2 \
    autoconf \
    autoconf-archive \
    automake \
    bash \
    bc \
    bison \
    bzip2 \
    ca-certificates \
    chrpath \
    cmake \
    coreutils \
    cpio \
    curl \
    diffoscope \
    dropbear \
    ed \
    ell \
    file \
    findutils \
    flex \
    gawk \
    gcc \
    gdb \
    git \
    gnupg \
    go \
    grep \
    gzip \
    htop \
    hwdata \
    iptables \
    json-c \
    less \
    libarchive \
    libpipeline \
    libtool \
    libxml2 \
    lighttpd \
    lsb-release \
    lsof \
    m4 \
    make \
    mariadb \
    mc \
    meson \
    mtools \
    nano \
    nasm \
    nginx \
    ninja \
    openssh \
    opkg \
    opkg-utils \
    orc \
    os-release \
    patch \
    pciutils \
    perl \
    pigz \
    postgresql \
    python3 \
    python3-jinja2 \
    python3-numpy \
    qemu \
    quilt \
    rpcsvc-proto \
    ruby \
    rsync \
    screen \
    sed \
    strace \
    stress-ng \
    subversion \
    sudo \
    squashfs-tools \
    tar \
    unzip \
    util-linux \
    valgrind \
    vim \
    wget \
    which \
    xz \
    zip \
    zstd \
"
RDEPENDS:${PN}:append:x86 = " \
    clang \
"
