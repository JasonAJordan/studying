/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.16

Define a structure Triangle that contains three Point members. Write a function that 
computes the perimeter of a Triangle. Write a program that reads the coordinates of 
the points, calls your function, and displays the result.

My function assumes they are valid points! 

*/

#include <iostream>
#include <cmath>

using namespace std;

// FROM HW E7.16
struct Point {      // Structure declaration
  double x;         // Member (int variable)
  double y;         // Member (string variable)
} ; 

double distance(Point a, Point b) {
  // distance between two points forumla
  return sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2) ) ;
}

double trianglePerimeter(Point a, Point b, Point c){
  double total;
  total = distance(a,b);
  total += distance(b,c);
  total += distance(c,a);
  return total;
}


// driver function
int main(){
  Point point1;
  point1.x = 1;
  point1.y = 3;

  Point point2;
  point2.x = 2;
  point2.y = 6;

  Point point3;
  point2.x = 6;
  point2.y = 3;

  cout << trianglePerimeter(point1, point2, point3) ; 

  return 0;
}
