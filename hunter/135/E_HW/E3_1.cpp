/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

Write a program that reads an integer and prints whether it is negative, zero, or 
positive. 
*/

#include <iostream>
using namespace std;


int main(){
  int n;

  cout << "Enter an integer: " << endl;
  cin >> n;

  if (n < 0){
    cout << "negative";
  } else if (n==0){
    cout << "zero";
  } else {
    cout << "positive";
  }


  return 0;
}