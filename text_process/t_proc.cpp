#include <iostream>
#include <cstring> 
#include <string>

using namespace std;

void t_proc(){
  //string S,F;
  //cin >> F;
  /*getline(cin,S);
  F += S; 
  //cout << F;
  for (int i = 0; i < F.length();++i){
    if(F[i] == ' ' ){
      
    }
  }*/


  char c = '\0';
  string res_str;
  while (cin.get(c)) { // на каждой итерации считываем один символ в переменную c
    /* здесь можно пользоваться значением прочитанным в переменную c */
    //cout << c;
    if ((c != ' ' && c != '\n') || (c == ' ' && res_str[res_str.length() - 1] != ' ')){
      res_str += c;
      //cout << "1";
    }
  
  }
  //cout << c;
  
  cout << res_str;
  return;
}


void t_proc_2(){
  int i = -1;
  char c = '\0';
  bool flag = false;
  while (cin.get(c)) { // на каждой итерации считываем один символ в переменную c
    /* здесь можно пользоваться значением прочитанным в переменную c */
    if ((c == ' ') && !(flag)){
      flag = true;
      cout << c;
    }else if((c != ' ')){
      flag = false;
      cout << c;
    }
    //cout << c;

  }
  
  return;
}

int main(){
  t_proc_2();
  return 0;
}