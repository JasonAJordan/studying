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
#include <fstream>

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


  // Hello I use this code to better test line by line. 
  // fstream in_file;
  // in_file.open("bad-code.cpp"); 

  // if (in_file.is_open()) { 
  //   string temp;
  //   // While the file has lines, the data will be read. 
  //   while (getline(in_file, temp)) { 
  //     //cout << temp;
  //     cout << removeLeadingSpaces(temp) << endl;
  //   }
  // }
  // in_file.close();

  while(getline(cin, str)) {
    cout << removeLeadingSpaces(str) << endl;
  }

  // cout << removeLeadingSpaces("       int x = 1;  @");
  // cout << removeLeadingSpaces("       @").length();
  return 0;
}
