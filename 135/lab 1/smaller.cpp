/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;

int main(){
  int firstNum;
  int secondNum;

  cout << "Enter the first number: " << endl;
  cin >> firstNum;
  cout << "Enter the second number: " << endl;
  cin >> secondNum;
  cout << endl;

  int smallest = (firstNum < secondNum) ? firstNum : secondNum;

  cout << "The smaller of the two is " << smallest << endl;

  return 0;
}