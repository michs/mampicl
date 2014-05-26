# User's customisations of the general build.
#
#
# CFLAGS_USER, MPICFLAGS_USER
# CPPFLAGS_USER, MPICPPFLAGS_USER
# LDFLAGS_USER, MPILDFLAGS_USER
#

MPICFLAGS_USER   += -DMPI_ALLOWED=1
MPICPPFLAGS_USER += -DMPI_ALLOWED=1
MPILDFLAGS_USER  +=

# Pedantic handling of warnings
# CFLAGS_USER = -Wall -Wextra -Werror -pedantic

