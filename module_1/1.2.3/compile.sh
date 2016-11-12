#!/bin/bash

gcc -o libHello.so -shared hello.c

#for x86_64
#gcc -o libHello.so -shared -fPIC  hello.c

#for look name
#nm libHello.so

gcc main.c -L. -lHello -o hello
export LD_LIBRARY_PATH=.
