/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12D



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

vector<int> sumPairWise( vector<int> &v1,  vector<int> &v2){
  vector<int> vec = {};
  int v1Len = v1.size();
  int v2Len = v2.size();
  
  int smallerLength = (v1Len > v2Len) ? v2Len : v1Len; 
  vector<int> largerVec = (v1Len > v2Len) ? v1 : v2;

  for (int i = 0; i < smallerLength ;i++){
    vec.push_back(v1[i] + v2[i]);
  }
  for (int j = smallerLength; j< largerVec.size(); j++){
    vec.push_back(largerVec[j]);
  }

  return vec;
}



int main() {
  vector<int> v1{1,2,3};
  vector<int> v2{4,5};

  vector<int> v3 = sumPairWise(v1, v2); // returns [5, 7, 3]
  // printVector(v3, v3.size());
}