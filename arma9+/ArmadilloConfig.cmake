# - Config file for the Armadillo package
# It defines the following variables
#  ARMADILLO_INCLUDE_DIRS - include directories for Armadillo
#  ARMADILLO_LIBRARY_DIRS - library directories for Armadillo (normally not used!)
#  ARMADILLO_LIBRARIES    - libraries to link against

# Tell the user project where to find our headers and libraries
set(ARMADILLO_INCLUDE_DIRS "/home/pimp-of-pimps/projects/loka/arma9+/tmp/include")
set(ARMADILLO_LIBRARY_DIRS "/home/pimp-of-pimps/projects/loka/arma9+")

# Our library dependencies (contains definitions for IMPORTED targets)
include("/home/pimp-of-pimps/projects/loka/arma9+/ArmadilloLibraryDepends.cmake")

# These are IMPORTED targets created by ArmadilloLibraryDepends.cmake
set(ARMADILLO_LIBRARIES armadillo)

