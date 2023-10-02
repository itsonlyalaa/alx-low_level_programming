#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
arar -rc liball.a *.o
ranlib liball.a
