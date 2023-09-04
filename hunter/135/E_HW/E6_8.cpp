/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.8

Write a function
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order

*/

#include <iostream>


using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
  if (a_size != b_size) return false;

  for (int i = 0; i < a_size; i++){
    if (a[i] != b[i]){
      return false;
    }
  }

  return true;
}

int main(){

  // driver function
  int array1[] = { 1, 2, 3, 4, 5};
  int array2[] = {1, 2, 3, 4, 6};

  int a_size = sizeof(array1) / sizeof(array1[0]);
  int b_size = sizeof(array2) / sizeof(array2[0]);
  
  bool res = equals(array1, a_size, array2, b_size);
  cout << res << endl;

  return 0;
}
