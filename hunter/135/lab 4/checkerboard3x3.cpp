/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4G

Write a program checkerboard3x3.cpp that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.)

Example 1:
Input width: 16
Input height: 11
 
Shape:
***   ***   ***
***   ***   ***
***   ***   ***
   ***   ***   *
   ***   ***   *
   ***   ***   *
***   ***   ***
***   ***   ***
***   ***   ***
   ***   ***   *
   ***   ***   *
 

*/

#include <iostream>
using namespace std;


void coutStars(bool stars){
  if (stars){
    cout << "*";
  } else {
    cout << " ";
  }
}

int main() {
  int w;
  int h;
  bool stars = true;
  int threeCountX = 0;
  int threeCountY = 0;
  bool yStarStar = true;

  cout << "Input width: " << endl;
  cin >> w;
 
  cout << "Input height: " << endl;
  cin >> h; 

  for (int i = 0; i < h; i++ ){
    // This resets the X count of 3s
    threeCountX = 0;
    if (yStarStar){
      stars = true;
    } else {
      stars = false;
    }

    for (int j = 0; j < w; j++){
      coutStars(stars);
      if (threeCountX == 2){
        threeCountX = 0;
        stars = !stars;
      } else {
        threeCountX++;
      }
    }

    // This flips if we start with stars or not.
    if ( (i + 1) % 3 == 0){
      yStarStar = !yStarStar;
    }

    cout << endl;
  }

  return 0;
}