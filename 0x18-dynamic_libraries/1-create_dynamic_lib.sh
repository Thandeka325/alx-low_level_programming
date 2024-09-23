#!/bin/bash
gcc -Wall -Wextra -Werrior -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
rm -f *.o
