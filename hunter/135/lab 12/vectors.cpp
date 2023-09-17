/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12A

A big benefit of vectors is their ability to be returned from functions. 
For this task, program a function called vector<int> makeVector(int n) that returns a vector of n integers that range from 0 to n-1. 
Call your program vectors.cpp. Your function must be implemented outside the main function and must return a vector

*/

#include <iostream>
#include <vector>
using namespace std;

// // my function
// void printVector(vector<int> a, int size)
// {
//     int i;
//     for (i = 0; i < size; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

vector<int> makeVector(int n){
  vector<int> vec = {};
  for (int i =0; i< n;i++){
    vec.push_back(i);
  }
  return vec;
}

int main() {
  
  // vector<int> vec = makeVector(5);

  // printVector(vec, 5);
}