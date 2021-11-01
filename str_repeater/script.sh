#!/bin/bash
code="str_repeater"
echo "$code"
cd ~/C-plus-plus-Stepic/$code
g++ "$code.cpp" -o run
out=$(./run)
echo "$out"
