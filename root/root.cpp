#include <iostream>
#include <cmath>
using namespace std;

void root(){
  int a,b,c;
  cin >> a;
  cin >> b;
  cin >> c;
  //cout << a << " " << b << " " << c;
  int discr = b*b - 4*a*c; 
  if (discr < 0){
    cout << "No real roots";
  }else if(discr == 0){
    cout << -b/(2*a) <<  " ";
    cout << -b/(2*a);
  }else{
        cout << (-b-sqrt(discr))/(2*a) << " ";
        cout << (-b+sqrt(discr))/(2*a);
  }
}

int main (){
  root();
  return 0;
}