/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 4

Write a program that opens "data.txt" and prints out everyline in file
*/

#include <iostream>
#include <fstream>
using namespace std;


int_fast64_t readfile(ifstream& in_file){
  string temp;

  if (in_file.fail()) { return 0;}
  while (getline(in_file, temp))  //reading a line from the file while possible
  {
        cout << temp << "\n"; 
  }
  return 0;
}

int main() {
  int sum;
  ifstream in_file;
  in_file.open("data.txt");

  readfile(in_file);
  in_file.close();

  return 0;
}