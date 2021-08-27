#include<iostream>

using namespace std;

void reverse(int first, int second, int * arr);
void print_arr(int len, int * arr);

int main(){
	int arr[] = {1,2,3,4};
  int len = sizeof(arr)/sizeof(arr[0]);
  reverse(1, 2, arr);
  print_arr(len, arr);
	return 0;
}

void shift_left(int len){
  for (int i = 0;)
  return;
}

void print_arr(int len, int * arr){
  for (int i = 0; i < len; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverse(int first, int second, int * arr)
{
	int t = arr[first];
	arr[first] = arr[second];
	arr[second] = t;		
	return ;
}
