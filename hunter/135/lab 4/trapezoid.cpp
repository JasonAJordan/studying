/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4F

Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!

Example 1:
Input width: 12
Input height: 5
 
Shape:
************
 **********
  ********
   ******
    ****

Example 2:
Input width: 5
Input height: 3
 
Shape:
*****
 ***
  *
Example 2:
Input width: 12
Input height: 7
 
Impossible shape!

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

  if ((( w + 1)/2) < h  ) {
    cout << "Impossible shape!" << endl;
    return 0;
  }

  for (int i = 0; i < h; i++ ){
    for (int j = 0; j < i; j++){
      cout << " ";
    }
    for (int k = 0; k < (w - (i*2)); k++){
      cout << "*";
    }
    cout << endl;

  }

  return 0;
}