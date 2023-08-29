// 10. You have implemented a class and the program that uses it in separate files. You just changed the
// class implementation file (but not the interface). What steps must be taken to bring the executable
// program up to date? In other words, what must be done, if anything, to each of the following files:
// class implementation file, class interface file, program file?



#include <iostream>
#include <fstream>
using namespace std;
#include "car.h"
#include "motorVehicle.h"

// Driver program only doing grade[5] for now
int main()
{ 
  Car car;
  
  int fuel = car.getFuel();
  cout << fuel;

  return 0;
}