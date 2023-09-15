/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9E

Fix this program poem.cpp. 
It should still keep creating poems, but all dynamically allocated memory should get deleted when it is not needed. 
(The program can be stopped with Ctrl+C in the terminal.)

*/

#include <iostream>

using namespace std;


string * createAPoemDynamically() {
  string *p = new string;
  *p = "Roses are red, violets are blue";
  return p;
}

int main() {
  while(true) {
      string *p;
      p = createAPoemDynamically();

      // assume that the poem p is not needed at this point
      delete p; // Is this all?

  }
  return 0;
}