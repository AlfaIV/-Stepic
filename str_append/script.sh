#!/bin/bash
code="str_append"
echo "$code"
cd ~/C-plus-plus-Stepic/$code
g++ "$code.cpp" -o run
out=$(./run)
echo "$out"
