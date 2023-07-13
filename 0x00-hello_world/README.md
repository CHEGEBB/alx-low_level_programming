#!/bin/bash

# Get the C file name from the environment variable
cfile=$CFILE

# Generate the assembly code in Intel syntax and save it to a file
gcc -S -masm=intel $cfile -o ${cfile%.c}.s

