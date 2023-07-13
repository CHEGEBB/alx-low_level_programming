#!/bin/bash

# Get the C file name from the environment variable
cfile=$CFILE

# Generate the assembly code and save it to a file
gcc -S $cfile -o ${cfile%.c}.s

