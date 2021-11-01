#!/bin/bash
code="str_const_dest"
echo "$code"
cd ~/C-plus-plus-Stepic/$code
g++ "$code.cpp" -o run
out=$(./run)
echo "$out"