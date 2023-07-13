#!/bin/bash

# Get the C file name from the environment variable
cfile=$CFILE

# Run the preprocessor and save the output to a file
gcc $cfile -E -o c

