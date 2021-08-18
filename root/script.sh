#!/bin/bash
code="root.cpp"
echo $code
#g++ $code -o run
#len=$(wc -l input_root.txt)
#echo $len
len=1
cat input_root.txt | while read test
do
  str_comp=$(cat output_root.txt | awk -v str=$len 'NR == str {print$0}')
  #awk -v x=$some_variable '$2 == x {print $1}' infile
  out=$(echo "$test" | ./run)
  echo "$out"
  #str_comp=$(cat input_root.txt | read)
  echo "$str_comp"
  if [ "$out" = "$str_comp" ];then
    echo "Pass"
  else
    echo "Fail"
  fi
  #(cat output_root.txt | while read str_comp)
  echo -e "\n"
  ((len+=1))
done 
#cat input_root.txt | awk  'NR == 1{print$0}' | ./run