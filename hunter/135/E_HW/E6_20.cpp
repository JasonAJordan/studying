/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.20

 TA PLEASE NOTE THAT I HAD A LEETCODE JUST LIKE THIS BUT WITH JS A FEW DAYS AGO. 

Write a function
  vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector. Keep an index into 
each vector, indicating how much of it has been processed already. Each time, 
append the smallest unprocessed element from either vector, then advance the index. 
For example, if a is
  1 4 9 16
and b is
  4 7 9 9 11
then merge_sorted returns the vector
1 4 4 7 9 9 9 11 16

*/

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> a, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> merge_sorted(vector<int> a, vector<int> b){
  vector<int> c = {};
  int idxA = 0;
  int idxB = 0;
  int aLens = a.size();
  int bLens = b.size();

  while (idxA < aLens && idxB < bLens){
    if (a[idxA] < b[idxB]){
      c.push_back(a[idxA]);
      idxA++;
    } else {
      c.push_back(b[idxB]);
      idxB++;
    }

  }
  if (idxA < aLens){
    c.push_back(a[idxA]);
    idxA++;
  }
  if (idxB < bLens){
    c.push_back(b[idxB]);
    idxB++;
  }
  return c;

  // From my JS NOTES: 
  // let idx1 = 0
  // let idx2 = 0

  // while (idx1 < arr1.length && idx2 < arr2.length){
  //   if (arr1[idx1] < arr2[idx2]){
  //     newArr.push(arr1[idx1])
  //     idx1++
  //   } else {
  //     newArr.push(arr2[idx2])
  //     idx2++
  //   }
  // }
  // if (idx1 <= arr1.length){
  //   newArr = newArr.concat(arr2.slice(idx2))
  // } else {
  //   newArr = newArr.concat(arr1.slice(idx1 ))
  // } 
}

int main(){
  vector<int> a = {1, 4, 9, 16};
  vector<int> b = {4, 7, 9, 9, 11};

  vector<int> c = merge_sorted(a, b);
  printVector(c, c.size());
  
  return 0;
}
