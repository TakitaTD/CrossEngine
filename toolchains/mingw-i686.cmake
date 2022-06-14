
set(CMAKE_SYSTEM_NAME Windows)

# which compilers to use for C and C++
set(CMAKE_C_COMPILER   i686-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER i686-w64-mingw32-g++)

# where is the target environment located
# set(CMAKE_FIND_ROOT_PATH  /usr/i686-w64-mingw32)

# adjust the default behavior of the FIND_XXX() commands:
# search programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# search headers and libraries in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "-Wl,--no-export-dynamic -static-libgcc -static-libstdc++")
message("ATTENTION: If you're getting a libwinpthread-1.dll error, please copy winpthread from your mingw/bin/libwinpthread-1.dll.")
message("ATTENTION: If you're getting a glfw3.dll error, please copy glfw3 from the deps/glfw/src directory.")
