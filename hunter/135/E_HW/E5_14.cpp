/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.14

Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is 
greater than b and otherwise leaves a and b unchanged. For example,
int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u, v); // u is still 2, v is still 3
sort2(w, x); // w is now 1, x is now 4


*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
  if (a > b ){
     int temp = b;
     b = a;
     a = temp;
  }
  // int temp = a;
  // (a, b) = (a > b) ? b, temp : a, b;

}

int main(){
  int a;
  int b;

  cout << "Enter first value: ";
  cin >> a;
  cout << "Enter second value: ";
  cin >> b;

  sort2(a, b);
  cout << "a : " << a << endl << "b : " << b << endl;

  return 0;
}
