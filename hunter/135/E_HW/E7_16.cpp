/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.16

Define a structure Point. A point has an x- and a y-coordinate. Write a function 
double distance(Point a, Point b) 
that computes the distance from a to b. Write a program 
that reads the coordinates of the points, calls your function, and displays the result.

*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point {      // Structure declaration
  double x;         // Member (int variable)
  double y;         // Member (string variable)
} ; 

double distance(Point a, Point b) {
  // distance between two points forumla
  return sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2) ) ;
}

// driver function
int main(){
  Point point1;
  point1.x = 1;
  point1.y = 3;

  Point point2;
  point2.x = 2;
  point2.y = 6;

  cout << distance(point1, point2) ; 

  return 0;
}
