/**
 * @file
 *
 * @brief This file implement a sample module that uses ChilKat.
 */

#include <stdio.h>
#include <C_CkStringBuilder.h>

/**
 * Say "Hello" to the world.
 */

void hello_world() {
    HCkStringBuilder string = CkStringBuilder_Create();
    CkStringBuilder_Append(string, "Hello World");
    printf("%s\n", CkStringBuilder_getAsString(string));
}
