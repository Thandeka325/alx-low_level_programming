#!/bin/bash
# Compile all .c files in the current directory into position-independent code (.o files)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# Create the dynamic library liball.so from all the .o files
gcc -shared -o liball.so *.o

# Clean up the object files after the dynamic library is created
rm -f *.o
