/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9A, B, C & E

Write a new program particle.cpp (you may copy anything you want from 3d-space.cpp if need be).

The program should declare a new class Particle, which
stores position and velocity of the particle, and
provides the following programming interface:

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

class Particle {
  public:
    double x;
    double y;
    double z;
    double vx; 
    double vy; 
    double vz;
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

  Coord3D * farthest = (p1Length > p2Length) ?  p1 : p2;
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

Particle* createParticle(double x, double y, double z, 
                         double vx, double vy, double vz){
  // pointer to object
  Particle *par;         
  
  // dynamic object creation
  par = new Particle;  
  par->x = x;
  par->y = y;
  par->z = z;
  par->vx = vx;
  par->vy = vy;
  par->vz = vz;
  
  return par;
}

void setVelocity(Particle *p, double vx, double vy, double vz){
  p->vx = vx;
  p->vy = vy;
  p->vz = vz;
}

Coord3D getPosition(Particle *p){
  Coord3D pos = {p -> x, p -> y, p -> z};
  return pos;
}

void move(Particle *p, double dt){
  p->x = p->x + ( p->vx* dt);
  p->y = p->y + ( p->vy* dt);
  p->z = p->z + ( p->vz* dt);
}

// free memory
void deleteParticle(Particle *p){
  delete p;
}


void deleteCoord3D(Coord3D *p){
  delete p;
};

int main() {
  // make new particle
  Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
  double time = 0.0;
  double dt = 0.1;
  while(time < 3.0) {
      // update its velocity
      setVelocity(p, 10.0 * time, 0.3, 0.1);

      // move the particle
      move(p, dt);
      time += dt;

      // reporting its coordinates
      cout << "Time: " << time << " \t";
      cout << "Position: "
            << getPosition(p).x << ", "
            << getPosition(p).y << ", "
            << getPosition(p).z << endl;
  }
  // remove the particle, deallocating its memory
  deleteParticle(p);
  
  return 0;
}