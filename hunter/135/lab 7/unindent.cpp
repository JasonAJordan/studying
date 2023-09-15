/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7A

Start by writing a function

string removeLeadingSpaces(string line);
that takes one line of code as input and returns its copy without leading spaces and tabs:

removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  "

Make use of the function isspace defined in <cctype> to check if a character is a whitespace.

*/

#include <iostream>
using namespace std;


string removeLeadingSpaces(string line){
  string newString;

  for (int i = 0; i < line.length(); i++){
    if ( isspace(line[i])){
      continue;
    } else {
      newString = line.substr(i, line.length() - i);
      break;
    }
  }

  return newString;
}


// Driver function if needed
int main(){
  string str;

  while(getline(cin, str)) {
    cout << removeLeadingSpaces(str) << endl;
  }

  // cout << removeLeadingSpaces("       int x = 1;  @");
  // cout << removeLeadingSpaces("       @").length();
  return 0;
}
