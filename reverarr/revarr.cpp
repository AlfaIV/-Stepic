#include<iostream>

using namespace std;

void shift_left(int len, int * arr);
void shift_right(int len, int * arr);
void reverse(int first, int second, int * arr);
void print_arr(int len, int * arr);
void rotate(int a[], unsigned size, int shift);

int main(){
	int arr[] = {1,2,3,4};
  int len = sizeof(arr)/sizeof(arr[0]);
  //reverse(1, 2, arr);
  print_arr(len, arr);
  rotate(arr, len, 2);
  print_arr(len, arr);
	return 0;
}

void shift_left(int len, int * arr){
  for (int i = 0; i < len - 1; ++i){
    reverse(i - 1, i, arr);
  }
  return;
}

void shift_right(int len, int * arr){
  for (int i = len - 1; i > 0; --i){
    reverse(i, i - 1, arr);
  }
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
void rotate(int a[], unsigned size, int shift)
{
  //out << size << " " << shift << endl;
  int t;
  for (int j = 0; j < shift; ++j){
    for (int i = 1; i < size; ++i){
      //cout << i << endl;
      t = a[i - 1];
      //cout << i << endl;
      a[i - 1] = a[i];
      a[i] = t;
      //print_arr(size, a);
    }
  }
}
