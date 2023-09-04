/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.

My program uses a while loop to keep checking if the inpot is valid. 

*/

#include <iostream>
using namespace std;



int main(){
  int n = 999; // intial placeholder
  
  while ((0 > n) || (n > 100)){
    cout << "Enter a int from 0 to 100: "<< endl;
    cin >> n;
  }

  return 0;
}
