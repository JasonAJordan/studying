/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6

Write a program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces). 
The program should report all characters from the input line together with their ASCII codes.

Make sure to print exactly one space between the character and it’s code.

Example:
$ ./test-ascii

Input: Cat :3 Dog

C 67
a 97
t 116
  32
: 58
3 51
  32
D 68
o 111
g 103

*/

#include <iostream>
using namespace std;


int main(){

  string inputString;

  cout <<  "Input: " << endl;
  getline(cin, inputString);
  // cin >> inputString;

  for (int i = 0; i < inputString.length(); i++){
    cout << inputString[i] << " " << (int)inputString[i] << endl;
  }

  return 0;
}
