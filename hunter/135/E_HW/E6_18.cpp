/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.18

Write a function
  vector<int> append(vector<int> a, vector<int> b)
that appends one vector after another. For example, if a is
  1 4 9 16
and b is
  9 7 4 9 11
then append returns the vector
  1 4 9 16 9 7 4 9 11

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

vector<int> append(vector<int> a, vector<int> b){
  a.insert(a.end(), b.begin(), b.end());
  return a;  
}

int main(){
  vector<int> a = {1, 4, 9, 16};
  vector<int> b = {9, 7, 4, 9, 11};

  b = append(a,b);
  printVector(b, b.size());
  
  return 0;
}
