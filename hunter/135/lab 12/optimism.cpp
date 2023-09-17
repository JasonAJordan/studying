/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12B


Make a program called optimism.cpp that implements the function vector<int> 
goodVibes(const vector<int>& v); that, given a vector of integers, returns a vector with 
only the positive integers in the same order.

vector<int> v{1,2,-1,3,4,-1,6};

goodVibes(v); // returns [1,2,3,4,6]

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

vector<int> goodVibes(const vector<int>& v){
  vector<int> vec = {};
  for (int i = 0; i < v.size() ;i++){
    if (v[i] > 0){
      vec.push_back(v[i]);
    }
  }

  return vec;
}

// vector<int> makeVector(int n){
//   vector<int> vec = {};
//   for (int i =0; i< n;i++){
//     vec.push_back(i);
//   }
//   return vec;
// }

int main() {
  
  // vector<int> v{1,2,-1,3,4,-1,6};

  // vector<int> vec = goodVibes(v);
  
  // printVector(vec, vec.size());

}