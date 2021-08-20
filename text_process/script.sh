#!/bin/bash
code="t_proc.cpp"
echo $code
g++ $code -o run
out=$(cat input_t_proc.txt  | ./run | cmp -l output_t_proc.txt)
#echo "$out" > out.txt
#out=$(cat input_t_proc.txt  | ./run)
echo "$out"
#echo $out | diff output_t_proc.txt
#echo $out | cmp -l output_t_proc.txt
#./run