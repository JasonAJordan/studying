/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12C

Make a program called fusion.cpp that implements the function void gogeta(vector<int> &goku, vector<int> &vegeta)
 that appends elements of the second vector into the first and empties the second vector. For example:

vector<int> v1{1,2,3};
vector<int> v2{4,5};

gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.

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

void gogeta(vector<int> &goku, vector<int> &vegeta){
  vector<int> vec = {};
  for (int i = 0; i < vegeta.size() ;i++){
      goku.push_back(vegeta[i]);
  }
  vegeta.clear();

}

int main() {
  vector<int> v1{1,2,3};
  vector<int> v2{4,5};

  // printVector(v1, v1.size());
  // printVector(v2, v2.size());

  gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
  // printVector(v1, v1.size());
  // printVector(v2, v2.size());
}