/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Asks the user for two number inputs, then returns the smaller one. 
*/

#include <iostream>
using namespace std;

int main(){
  int firstNum;
  int secondNum;

  cout << "Enter the first number: " ;
  cin >> firstNum;
  cout << "Enter the second number: " ;
  cin >> secondNum;
  cout << endl;

  int smallest = (firstNum < secondNum) ? firstNum : secondNum;

  cout << "The smaller of the two is " << smallest << endl;

  return 0;
}