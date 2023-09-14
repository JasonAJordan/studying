/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.6

Write a function
string middle(string str)
that returns a string containing the middle character in str if the length of str is odd, 
or the two middle characters if the length is even. For example, middle("middle")
returns "dd"

*/

#include <iostream>
using namespace std;

string middle(string str){
  int length = str.length();
  string string2;
  if (length % 2 == 0){
    int idx = (length / 2);
    string2 = str.substr(idx - 1, 2);
    // cout << string2;
    return string2;
  } else {
    int idx = (length - 1) / 2;
    string2 = str.substr(idx, 1);
    // cout << string2;
    return string2;
  }
}

int main(){
  string str;

  cout << "Enter a String: ";
  cin >> str;

  middle(str);
  return 0;
}
