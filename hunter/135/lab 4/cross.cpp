/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4C

Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.

Example:
Input size: 8
 
Shape:
*      *
 *    *
  *  *
   **
   **
  *  *
 *    *
*      *

*/

#include <iostream>
using namespace std;


int main() {
  int w;
  int h;
  // bool starStar = true;

  cout << "Input size: " << endl;
  cin >> w;
 
  // cout << "Input height: " << endl;
  // cin >> h; 



  for (int i = 0; i < w; i++ ){
    for (int j = 0; j < w; j++){

      if ( (j == i) || (j == (w-i - 1)) ) {
          cout << "*";
        } else {
          cout << " ";
        }
    }
    cout << endl;

  }

  return 0;
}