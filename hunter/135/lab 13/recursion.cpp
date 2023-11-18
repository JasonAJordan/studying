/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 13A, B, C, D

// Part A
Write a program recursion.cpp, defining a function

void printRange(int left, int right);
that prints all numbers in range left ≤   x   ≤ right, separated by spaces. (Don’t use loops, global or static variables.)

A usage example:

int main() {
    printRange(-2, 10);
}
Will print:

-2 -1 0 1 2 3 4 5 6 7 8 9 10
When left > right, the range is empty and the program should not print any numbers.

// Part B
int sumRange(int left, int right);
that computes the sum of all numbers in range left ≤   x   ≤ right. (Don’t use loops, global or static variables.)

Part C
int sumArray(int *arr, int size);

Part D
bool isAlphanumeric(string s);
*/

#include <iostream>
using namespace std;


void printRange(int left, int right){
  if (left <= right){
    cout << left << " ";
    printRange(left + 1, right);
  }
}


int sumRange(int left, int right){

  if (left > right ){
    return 0;
  }
  if (left == right){
    return right;
  } else {
    return left + sumRange(left + 1, right );
  }

}

int sumArray(int *arr, int size){
  if (size == 0){
    return 0;
  }
  if (size == 1){
    return arr[0];
  }
  // cout << arr[size-1] << " " << size << endl;
  return arr[size - 1] + sumArray(arr, size - 1);
}
  
// alphanumeric check iswalnum(char)
bool isAlphanumeric(string s){
  if (s.length() == 0 ){
    return true;
  } 
  if (s.length() == 1){
    return iswalnum(s[0]);
  }

  // I check each char for iswalnum then make a substring and run it again unftil the 
  // string hits a lens of 1
  return iswalnum(s[0]) && isAlphanumeric(s.substr(1, s.length()));

}

int main() {
  int x = sumRange(1,3);
  cout << x ; 
  // cout << isAlphanumeric("ABCD") << endl;        // true (1)
  // cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
  // cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

  return 0;
}
