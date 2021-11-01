#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

struct String {

    /* Реализуйте этот конструктор */
	String(const char *str = ""){
    //Определение длинны строки
    this-> size = 0;
    //std::cout << str << '\n';
	  while(*str != '\0'){
		  std::cout << *str;
      this->size += 1;
		  str += 1;
    }
    std::cout << '\n' << size;
    //Выделение под строку память
    this-> str = new char[this->size + 1];
    
  }

	size_t size;
	char *str;
};


int Test1(){
  char s[] = "sdfdsg";
  char *p = s;
  size_t size = 0;
  //String St1;
	while(*p != '\0'){
    std::cout << *p;
	  p += 1;
    size += 1;
  }
  std::cout << '\n' << size;
  return 1;
}

int main(){
  char s[] = "Hellow";
  char *p = s;
  String str1(s);
  //Test1();
  return 1;
}