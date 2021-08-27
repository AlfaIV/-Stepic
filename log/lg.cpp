#include<iostream>
#include<cmath>
#include <cstdlib>

#define MAX(x, y, r) (x < y) ? r = y : r = x/* присваивает r максимум из x и y */

int lg(int log);

void test();

void IO_process();
double log(double a, double b);


int main(){
  test();
  return 0;
}

int lg(int log){
  int k = -1;
  do{
    log >>= 1;
    ++k;
  }while(log);
  return k;
}

void IO_process(){
  int count;
  std::cin >> count;
  int input;
  for (int i = 0; i < count; ++i){
    std::cin >> input;
    std::cout << lg(input) << std::endl;

  }
}

void test(){
  int count = 100;
  srand(4541);
  int num;
  for (int i = 0; i < count; ++i){
    //std::cout << rand() << "\t"
    num = rand();
    //std::cout << floor((log(2,num))) << std::endl;
    (floor((log(2,num))) == lg(num)) ? std::cout << "pass": std::cout << "fall";
  }
}

double log(double a, double b)
{
    return log(b) / log(a);
}