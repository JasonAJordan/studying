/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 1

implement vector<int> makeVector (int n) that returns a vector contraingin n to 0 for n > 0
for n < =0; return empty vector

*/

#include <iostream>
#include <vector>
using namespace std;



vector<int> makeVector(int n){
  vector<int> v;
  if (n <= 0){
    return v;
  }
  for (int i = n; i >= 0; i--){
    v.push_back(i);
  }
  return v;
};

void printv(vector<int> v)
{
    int i;
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        
    }
    cout << endl;
}

int main() {
  int sum = 3;

  vector<int> v2 = makeVector(0);

  printv(v2);

  return 0;
}


