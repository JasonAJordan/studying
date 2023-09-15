/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9A, B, C & E

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

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  // x' = x + vel.x * dt;
  // y' = y + vel.x * dt; 
  // z' = z + vel.x * dt;

  ppos->x = ppos->x + (pvel->x * dt);
  ppos->y = ppos->y + (pvel->y * dt);
  ppos->z = ppos->z + (pvel->z * dt);
}

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
  // pointer to object
  Coord3D *pos;         
  
  // dynamic object creation
  pos = new Coord3D;  
  pos->x = x;
  pos->y = y;
  pos->z = z;
  
  return pos;
};

// free memory
void deleteCoord3D(Coord3D *p){
  delete p;
};

int main() {
  // // for part a
  // Coord3D pointP = {10, 20, 30};
  // cout << length(&pointP) << endl; // would print 37.4166


  // // Part B
  // Coord3D pointP = {10, 20, 30};
  // Coord3D pointQ = {-20, 21, -22};

  // cout << "Address of P: " << &pointP << endl;
  // cout << "Address of Q: " << &pointQ << endl << endl;

  // Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  
  // cout << "ans = " << ans << endl; // So which point is farther?
  // // Looks like it was Q!

  // // Part C
  // Coord3D pos = {0, 0, 100.0};
  // Coord3D vel = {1, -5, 0.2};

  // move(&pos, &vel, 2.0); // object pos gets changed
  // cout << pos.x << " " << pos.y << " " << pos.z << endl;
  // // prints: 2 -10 100.4

  // delete &pos;
  // delete &vel;

  // Part E
  double x, y, z;
  cout << "Enter position: ";
  cin >> x >> y >> z;
  Coord3D *ppos = createCoord3D(x,y,z);
  
  cout << "Enter velocity: ";
  cin >> x >> y >> z;
  Coord3D *pvel = createCoord3D(x,y,z);

  move(ppos, pvel, 10.0);

  cout << "Coordinates after 10 seconds: " 
        << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

  
  return 0;
}