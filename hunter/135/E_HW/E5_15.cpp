/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.15

Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to 
arrange them in sorted order. For example,
int v = 3;
int w = 4;
int x = 1;

sort3(v, w, x); // v is now 1, w is now 3, x is now 4 

Hint: Use multiple calls to the sort2 function of Exercise E5.14.
// I would rather not but okay. 

*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
  if (a > b ){
     int temp = b;
     b = a;
     a = temp;
  }
}

int main(){
  int a;
  int b;
  int c;

  cout << "Enter first value: ";
  cin >> a;
  cout << "Enter second value: ";
  cin >> b;
  cout << "Enter third value: ";
  cin >> c;

  sort2(a, b);
  sort2(b,c);
  sort2(a,b);

  cout << "a : " << a << endl << "b : " << b << endl << "c : " << c << endl;

  return 0;
}
