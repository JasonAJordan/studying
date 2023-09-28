/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 2

Write a program that takes 2 ints from console and prints the larger one.
*/

#include <iostream>
using namespace std;

int main() {
  int amount1;
  int amount2;

  cout << "Input for x: ";
  cin >> amount1;
  cout << endl;

  cout << "Input for y: ";
  cin >> amount2;
  cout << endl;

  int larger = (amount1 > amount2 ) ? amount1 : amount2;
  
  cout << "The larger int is " << larger << endl;

  return 0;
}