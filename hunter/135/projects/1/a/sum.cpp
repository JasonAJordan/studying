/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A

Write a program sum.cpp that reads a sequence of integers from cin, and reports their sum.

My program takes the example while loop and has the value being added to a total. 
That total is cout'd after the file has been fully read.
*/

#include <iostream>

using namespace std;


int main() {
    int i;
    int total;
    while(cin >> i) { // While the reading operation is a success
        total += i;
    }
    cout << total << endl;
    
  return 0;
}
