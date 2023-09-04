/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Write a program print-interval.cpp that asks the user to input two integers L and U 
(representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces. 
Notice that we include the lower limit, but exclude the upper limit.

My program uses a for loop to print each number between the lower and upper bonds

*/

#include <iostream>
using namespace std;



int main(){
  int L; // intial placeholder
  int U;

  cout << "Enter lower bonds: " << endl;
  cin >> L;
  cout <<  "Enter upper bonds: " << endl;
  cin >> U;

  for(int i = L; i < U; i++) {
    cout << i << " ";

  }
  return 0;
}
