/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).

*/

#include <iostream>
using namespace std;

int main(){

  int array[60];

  array[0] = 0;
  cout << 0 << endl;
  array[1] = 1;
  cout << 1 << endl;
  for (int i = 2; i < 60; i++){
    array[i] = array[i - 1] + array[i - 2];

    cout << array[i] << endl;
  }

  return 0;
}
