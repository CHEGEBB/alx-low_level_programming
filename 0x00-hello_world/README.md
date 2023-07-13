#!/bin/bash

# Get the C file name from the environment variable
cfile=$CFILE

# Compile the C file and create an executable named cisfun
gcc $cfile -o cisfun
