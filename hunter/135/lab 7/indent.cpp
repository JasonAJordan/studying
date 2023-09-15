/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7B

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

int countChar(string line, char c){
  int count = 0;
  for (int i = 0; i < line.length(); i++){
    if ( line[i] == c){
      count++;
    } 
  }
  return count;
}


// Driver function if needed
int main(){
  string str;
  int count = 0; 

  // // Hello I use this code to better test line by line in my vscode terminal. 
  // fstream in_file;
  // in_file.open("bad-code2.cpp"); 

  // if (in_file.is_open()) { 
  //   string temp;
  //   // While the file has lines, the data will be read. 
  //   // Copy and paste STARTING HERE, change in_file to cin & temp to str! 
  //   while (getline(in_file, temp)) { 
  //     // cout << count << endl;
  //     if (removeLeadingSpaces(temp)[0] == '}'){
  //       count--;
  //     }
  //     for (int i = 0; i < count; i++){
  //       cout << "\t";
  //     }
  //     count += countChar(temp, '{');
  //     count -= countChar(temp, '}');
  //     cout << removeLeadingSpaces(temp) << endl;
  //   }
  //   // Copy and paste END HERE
  // }
  // in_file.close();


  while (getline(cin, str)) { 
    // cout << count << endl;
    if (removeLeadingSpaces(str)[0] == '}'){
      count--;
    }
    for (int i = 0; i < count; i++){
      cout << "\t";
    }
    count += countChar(str, '{');
    count -= countChar(str, '}');
    cout << removeLeadingSpaces(str) << endl;
  }

  return 0;
}
