/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Asks the user for three number inputs.
Then returns the smallest input. 
*/

#include <iostream>
using namespace std;

int main(){
  int firstNum;
  int secondNum;
  int thirdNum; 

  cout << "Enter the first number: " ;
  cin >> firstNum;
  cout << "Enter the second number: " ;
  cin >> secondNum;
  cout << "Enter the third number: " ;
  cin >> thirdNum;
  cout << endl;

  int smallestp1 = (firstNum < secondNum) ? firstNum : secondNum;
  int smallest = (smallestp1 < thirdNum) ? smallestp1 : thirdNum;

  cout << "The smaller of the three is " << smallest << endl;

  return 0;
}