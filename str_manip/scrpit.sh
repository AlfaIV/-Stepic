#!/bin/bash
code="str_manip"
echo "$code"
cd ~/C-plus-plus-Stepic/$code
g++ "$code.cpp" -o run
out=$(./run)
#out=$(cat input_lg.txt  | ./run)
#out=$(cat input_t_proc.txt  | ./run | cmp -l output_t_proc.txt)
echo "$out"
