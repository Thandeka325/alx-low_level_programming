#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o
