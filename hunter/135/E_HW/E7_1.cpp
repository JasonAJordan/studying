/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.1

Write a function
  void sort2(double* p, double* q)
that receives two pointers and sorts the values to which they point. If you call
  sort2(&x, &y)
then x <= y after the call.

*/

#include <iostream>
#include <fstream>

using namespace std;

void sort2(double* p, double* q){
  if (*p > *q){
    double temp = *q;
    *q = *p;
    *p = temp;
  }

}

int main(){
  double a;
  double b;
  cout << "Enter the 1st value :";
  cin >> a;
  cout << "Enter the 2nd value :";
  cin >> b;
  
  sort2( &a, &b);
  cout << a << " " << b;

  return 0;
}
