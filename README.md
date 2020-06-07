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
