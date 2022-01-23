# Use the stronger sha256 for verification.
PACKAGECONFIG:append = " sha256"

# Use curl over wget. We can configure curl to be smaller.
PACKAGECONFIG:append = " curl"
