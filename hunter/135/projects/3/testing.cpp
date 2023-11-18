#include <string>
#include <iostream>
using namespace std;

int main(){
  int rowCnt = 3;
  int colCnt = 3;

  int** array = new int*[rowCnt];
    for (int row = 0; row < rowCnt; ++row)
      array[row] = new int[colCnt];
    for (int row = 0; row < rowCnt; ++row)
      for (int col = 0; col < colCnt; ++col)
        // array[row][col] = 0;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j< 3; j++){
          cout << array[i][j] << " ";
    }
  }
  
}