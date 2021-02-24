# Switch from gnutls to openssl to reduce base container size. This is the
# only package that pulled in gnutls, but openssl is required by multiple
# other packages in the base container.
PACKAGECONFIG_remove = "gnutls"
PACKAGECONFIG_append = " openssl"
