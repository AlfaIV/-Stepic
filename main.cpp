#include <iostream>
#include "exponentiation.hpp"

int main()
{
  int x;
  unsigned int p;
  std::cin >> x;
  std::cin >> p;
  std::cout << power(x,p) << "\n";
  //std::cout << "Hello, World!\n" << std::endl;
  return 0;
}