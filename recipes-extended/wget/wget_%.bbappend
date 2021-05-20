# Switch from gnutls to openssl to reduce base container size. This is the
# only package that pulls in gnutls, but openssl is required by multiple
# other packages in the base container.
PACKAGECONFIG_remove = "gnutls"
PACKAGECONFIG_append = " openssl"
