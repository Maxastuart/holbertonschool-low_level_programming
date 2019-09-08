#!/bin/bash

gcc -fPIC -c liball.c
gcc -shared -o liball.so liball.o
