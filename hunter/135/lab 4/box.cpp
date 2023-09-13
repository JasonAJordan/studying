/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4A

Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).

Example:
Input width: 7
Input height: 4
 
Shape:
*******
*******
*******
*******

*/

#include <iostream>
using namespace std;


int main() {
  int w;
  int h;

  cout << "Input width: " << endl;
  cin >> w;
 
  cout << "Input height: " << endl;
  cin >> h; 


  for (int i = 0; i < h; i++ ){
    for (int j = 0; j < w; j++){
      cout << "*";
    }
    cout << endl;

  }

  return 0;
}