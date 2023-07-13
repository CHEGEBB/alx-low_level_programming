#!/bin/bash

# Get the C file name from the environment variable
cfile=$CFILE

# Compile the C file and save the output to a file with the .o extension
gcc -c $cfile -o ${cfile%.c}.o
