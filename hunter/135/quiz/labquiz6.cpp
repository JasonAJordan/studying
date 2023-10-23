/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 6

Write a function max3() that takes 3 ints returns the max of 3 integers. 
*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
  int d = (a > b) ? a : b;
  return (d > c) ? d : c;
}