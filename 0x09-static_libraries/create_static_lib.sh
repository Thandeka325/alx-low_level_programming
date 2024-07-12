#!/bin/bash

## A script to create a static library for all .c files in the current dir.

## Compile all .c files into .o files
gcc -c *.c


## Create the static library from the .o files
ar rcs liball.a *.o

## Index the library
ranlib liball.a

## Clean up by removing the .o files
rm *.o

echo "Static library liball.a has been created."
