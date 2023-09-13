/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4B

Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).

Example:
Input width: 11
Input height: 6
 
Shape:
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * *

*/

#include <iostream>
using namespace std;


int main() {
  int w;
  int h;
  bool starStar = true;

  cout << "Input width: " << endl;
  cin >> w;
 
  cout << "Input height: " << endl;
  cin >> h; 



  for (int i = 0; i < h; i++ ){
    for (int j = 0; j < w; j++){

      if (starStar) {
        if ( j % 2 == 0){
          cout << "*";
        } else {
          cout << " ";
        }

      } else {
        if ( j % 2 == 1){
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
    starStar = !starStar;

  }

  return 0;
}