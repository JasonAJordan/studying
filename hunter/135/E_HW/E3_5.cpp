/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

Increasing, Decreasing or Neither

Write a program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. 
Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.
*/

#include <iostream>
using namespace std;

int main(){

  int i;
  int j;
  int k;

  cout << "Enter the first number: " << endl;
  cin >> i;
  cout << "Enter the second number: " << endl;
  cin >> j;
  cout << "Enter the third number: " << endl;
  cin >> k;

  if ((i < j) && (j < k)){
    cout << "increasing" << endl;
  } else if ((i > j) && (j > k)){
    cout << "decreasing" << endl;
  } else {
    cout << "neither" << endl;
  }
  return 0;
}
