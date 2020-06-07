# Description

This repository gives a _very basic_ CMAKE use case.
It build a single executable.

* `bin`: destination directory for the executable.
* `extra`: directory used to store extra software components.
  In this case, we use the Chilkat toolbox.
* `src`: contains the sources for the executable.

# Compile

    cmake . && make

> As you can see, the command `cmake .` generates the file `Makefile`. 
    
# Execute

    bin/hello_world

# Explanation

CMAKE configuration file: [CMakeLists.txt](CMakeLists.txt)

Set the paths to header files located outside of the default search path.

    include_directories(/path/to/header/1 /path/to/header/2...)
    
Set the paths to libraries located outside of the default search path.

    link_directories(/path/to/lib/1 /path/to/lib/2...)

Declare the sources of an executable:
    
    add_executable(executable_name path/to/source1 path/to/source2...)
    
Declare the libraries to be linked against an executable:

    target_link_libraries(executable_name library1 library2...)
    
> If you need `libcurl.a`, then you specify `curl` (you remove `lib` and `.a`).

Set other properties to apply to the executable(s):

    set_target_properties(
            executable1_name executable2_name...
            PROPERTIES
            property_name1 value1
            property_name2 value2
            ...)

For example:

    set_target_properties(
            hello_world
            PROPERTIES
            COMPILE_FLAGS  -Wall
            RUNTIME_OUTPUT_DIRECTORY bin
            EXCLUDE_FROM_ALL off)

> * `RUNTIME_OUTPUT_DIRECTORY bin`: set the path of the directory where to put the executable.
> * `EXCLUDE_FROM_ALL off`: tell whether the target must be compiled when building "all" (`make all`), or not.
>   `off` => do not exclude (this is the default value).  
