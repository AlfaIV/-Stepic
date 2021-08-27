#!/bin/bash
code="Perm.cpp"
echo $code
g++ $code -o run
out=$(./run)
#out=$(cat input_lg.txt  | ./run)
#out=$(cat input_t_proc.txt  | ./run | cmp -l output_t_proc.txt)
echo "$out"