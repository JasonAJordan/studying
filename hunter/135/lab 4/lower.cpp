/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4D

Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

Example:
Input side length: 6
 
Shape:
*
**
***
****
*****
******

*/

#include <iostream>
using namespace std;


int main() {
  int s;

  cout << "Input side length:" << endl;
  cin >> s;

  for (int i = 0; i < s; i++ ){
    for (int j = 0; j <= i; j++){
      cout << "*";
    }
    cout << endl;

  }

  return 0;
}