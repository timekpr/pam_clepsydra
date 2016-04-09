#!/bin/bash

#gcc -m32 -fPIC -DPIC -shared -rdynamic -o pam_clepsydra_32.so pam_clepsydra.c
gcc -m64 -fPIC -DPIC -shared -rdynamic -o pam_clepsydra_64.so pam_clepsydra.c

