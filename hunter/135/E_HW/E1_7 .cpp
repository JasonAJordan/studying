/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E1.7

Write a program that prints three items, such as the names of your three best friends 
or favorite movies, on three separate lines.
*/

#include <iostream>
using namespace std;


int main(){
  string x;
  string y;
  string z;

  cout << "Enter the first thing: " << endl;
  cin >> x;
  cout << "Enter the second thing: " << endl;
  cin >> y;
  cout << "Enter the third thing: " << endl;
  cin >> z;

  cout << x << endl;
  cout << y << endl;
  cout << z << endl;

  return 0;
}