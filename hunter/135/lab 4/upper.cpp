/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4E

Write a program upper.cpp that prints the top-right half of a square, given the side length.

Example:
Input side length: 5
 
Shape:
*****
 ****
  ***
   **
    *

*/

#include <iostream>
using namespace std;


int main() {
  int s;

  cout << "Input side length:" << endl;
  cin >> s;

  for (int i = 0; i < s; i++ ){
    for (int j = 0; j < i; j++){
      cout << " ";
    }
    for (int k = 0; k < s - i; k++){
      cout << "*";
    }
    cout << endl;

  }

  return 0;
}