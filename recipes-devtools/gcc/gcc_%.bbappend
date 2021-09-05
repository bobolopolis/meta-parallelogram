# Users may not expect gcc to be using -march=native by default. Remove this
# setting to keep the GCC default of x86-64 and let users decide if they want
# more aggressive optimization.
EXTRA_OECONF:remove:x86-64:class-target = "--with-arch=native"
