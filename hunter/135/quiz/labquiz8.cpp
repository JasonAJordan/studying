/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 8

Unbalanced

*/

#include <iostream>
using namespace std;

int unbalanced_brackets(string s) {
  int count = 0;
  int len = s.length();
  for (int i = 0; i < len; i++){
    if (s[i] == '{'){
      count = count + 1;
    } else if (s[i] == '}'){
      count = count - 1;
    }
  }
  return count;
}