cmake_minimum_required(VERSION 3.10)
project(ex1 LANGUAGES C)
set(CMAKE_C_STANDARD 99)

# OPTIONAL. Tell the linket to use static libraries (.a).
set(CMAKE_LINK_SEARCH_START_STATIC on)

# Configure the search path for extra header files that are not located in the default search path for header files.
include_directories(extra/chilkat-9.5.0-x86_64-linux-gcc/include)

# Configure the search path for extra libraries that are not located in the default search path for libraries.
link_directories(extra/chilkat-9.5.0-x86_64-linux-gcc/lib)

# Declare how to build the executable.
# - add_executable: declare the executable sources.
# - target_link_libraries: declare the libraries used by the executable.
# - set_target_properties: set properties.
#   - COMPILE_FLAGS: some compiler flag.
#   - RUNTIME_OUTPUT_DIRECTORY: the directory where to put the executable.
#   - EXCLUDE_FROM_ALL: tell whether the target must be compiled when building "all", or not.
add_executable(hello_world src/main.c src/module.c src/module.h)
target_link_libraries(hello_world chilkat-9.5.0)
set_target_properties(
        hello_world
        PROPERTIES
        COMPILE_FLAGS  -Wall
        RUNTIME_OUTPUT_DIRECTORY bin
        EXCLUDE_FROM_ALL off)

