/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 5

Write a program that prints a 6x5  rectangle of '+''s.
*/

#include <iostream>
using namespace std;

int main() {
  for (int j = 0; j< 6; j++){
    for (int i = 0; i< 5; i++){
      cout << "+";
    }
  if (j != 5){
  cout << endl;
  }

  }

  return 0;
}