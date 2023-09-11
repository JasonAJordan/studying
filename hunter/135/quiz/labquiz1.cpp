/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 1

// Enter an int from console using cin >>
// print out "I love C++"" that many times"
*/

#include <iostream>
using namespace std;

int main() {
  int amount;
  cout << "Enter an int: ";
  cin >> amount;
  cout << endl;

  for ( int i = 0; i < amount ; i++){
    cout << "I love C++" << endl;
  }
  cout << endl;
    
  return 0;
}