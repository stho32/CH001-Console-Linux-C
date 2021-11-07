#!/bin/bash
rm -rf publish*
mkdir publish
echo "compiling using gcc"
gcc -Wall Source/random.c -o publish/random -lm




