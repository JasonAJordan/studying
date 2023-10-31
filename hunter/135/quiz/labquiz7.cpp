/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 7

Write a void function remove-e that takes a string and removes all letter 'e' from the original string
*/

#include <iostream>
using namespace std;

void remove_e(string& s) {
  string s2 = "";
  int lens = s.length();

  for (int i = 0; i< lens; i++){
    if (s[i] != 'e'){
      s2 += s[i];
    }
  }

  s = s2;
}

// int main(){
//   string test = "asdfeasdfeee";
//   remove_e(test);
//   cout << test ; 
//   return 0; 
// }