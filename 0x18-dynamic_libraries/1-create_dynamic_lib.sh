#!/bin/bash
gcc -Wall -Werror -pedantic -fPic -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

