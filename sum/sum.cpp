#include <iostream>
#include <cstring> 
using namespace std;

void sum(){
int len;
  cin >> len;
  //cout << len << "\n";
  int a,b;
  for(int j = 0; j < len; ++j){
    //cout << j << " ";
    cin >> a;
    cin >> b;
    //cout << a << " " << b << "\n";
    cout << a + b;
    if (j + 1 != len){
      cout << "\n";
    }

    /*string input_str;
    getline(cin, input_str); 
    cout << input_str << "\n";

    char sep;
    sep = ' '; 
    string one;
    string second;

    for (int i = 0; i < input_str.length(); ++i){

      if (input_str[i] == sep){
        //cout << 0;
        one.assign(input_str,0,i);
        second.assign(input_str,i+1,input_str.length());
        break;
      }

      //cout << typeid(input_str[i]);
      //cout << input_str[i] << "\n";
    };
    int a = stoi(one);
    int b = stoi(second);
    
    cout << a <<endl;
    cout << b;*/
  }
}


int main()
{
  sum();
  return 0;
}