#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=&PWD:$LD_LIBRARY_PATH
