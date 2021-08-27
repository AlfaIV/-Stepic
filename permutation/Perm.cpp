#include <iostream>

using namespace std;

void Perm(){
	int Num;
	cin >> Num;
	if(Num != 0) {
    Perm();
    cout <<  Num << " ";
  }
}

int main(){
	Perm();
	return 0;
}
