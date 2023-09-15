/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9A, B & C

Write a program 3d-space.cpp, 
in which you define a function length() that receives the coordinates of a point P passed as a pointer,
and computes the distance from the origin to the point P:

*/

#include <iostream>
#include <cmath> // sqrt()
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
  double x = p->x;
  double y = p -> y;
  double z = p-> z;
  return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
};

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  double p1Length = length(p1);
  double p2Length = length(p2);

  Coord3D * farthest = (p1Length > p1Length) ?  p1 : p2;
  return farthest;
}

int main() {
  // // for part a
  // Coord3D pointP = {10, 20, 30};
  // cout << length(&pointP) << endl; // would print 37.4166

  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  cout << "Address of P: " << &pointP << endl;
  cout << "Address of Q: " << &pointQ << endl << endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  
  cout << "ans = " << ans << endl; // So which point is farther?
  // Looks like it was Q!

  return 0;
}