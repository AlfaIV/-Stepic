#include<iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

using  namespace std;

void swap_min(int *m[], unsigned rows, unsigned cols)
{
  //cout << rows;
  //int min = m[0][0];
  //cout << m[0][0];
  int * row;
  for(int i = 0; i < rows; ++i){
    //cout << *m;
    cout << m[i];
    cout << (int *)m;
    row = m[i];
    //m++;
    for(int j = 0; j < cols; ++j){
      //cout << *m[0];
      //cout << *((int *)m + j * rows + i);
      cout << *((int *)m + j * rows + i);
      cout << *row;
    }
    cout << endl;
  }
  //cout << *min; 
  cout << endl;   
}

int ** create_array2d(size_t a, size_t b){
  int ** m = new int *[a];
  m[0] = new int[a*b];
  for(size_t i = 1; i != a; ++i){
    m[i] = m[i - 1] + b;
  }
  return m;
}

void make_array2d(const int * const * m, unsigned rows, unsigned cols){
  srand(454112);
  for(unsigned i = 0; i < rows; ++i){
    for(unsigned j = 0; j < cols; ++j){
      *((int *)m + i * cols + j) = rand()%10;
    }
  }
}

void print_array2d(const int * const * m, unsigned rows, unsigned cols){
  for(unsigned i = 0; i < rows; ++i){
    for(unsigned j = 0; j < cols; ++j){
      std::cout << *((int *)m + i * cols + j) << " ";
    }
    std::cout << endl;
  }
}

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
  int ** new_m = create_array2d(rows,cols);
  for(unsigned i = 0; i < rows; ++i){
    for(unsigned j = 0; j < cols; ++j){
      *((int *)new_m + j*rows + i) = *((int *)m + i * cols + j);
      //std::cout << *((int *)m + i * cols + j) << " ";
      //new_m[j][i] = m[i][j];
    }
    //cout << endl;
  }
  return new_m;
}

void transonse_arr(){

  
  //int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  //int ** abc = m;
  unsigned row = 2,col = 3;
  int ** m = create_array2d(row,col);
  make_array2d(m,row,col);
  print_array2d(m,row,col);
  cout << "!!!" << endl;
  int ** new_m = transpose(m,row,col);
  cout << "!!!" << endl;
  print_array2d(new_m,col,row);
  //int ** new_m = transpose(m,3,3);  
}


void reverse_min(){
  unsigned row = 3,col = 3;
  //int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int ** m = create_array2d(row,col);
  make_array2d(m,row,col);
  print_array2d(m,row,col);
  cout << "!!!" << endl;
  swap_min(m,row,col);
  cout << "!!!" << endl;
  print_array2d(m,col,row);
}

int main(){
  //transonse_arr();
  reverse_min();
	return 0;
}
