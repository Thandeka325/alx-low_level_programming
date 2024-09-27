#!/bin/bash
gcc -Wall -Werror -pedantic -fPIC -c *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
