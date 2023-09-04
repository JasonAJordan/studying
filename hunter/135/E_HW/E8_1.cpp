/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E8.1

Write a program that carries out the following tasks:
  Open a file with the name hello.txt.
  Store the message “Hello, World!” in the file.
  Close the file.
  Open the same file again.
  Read the message into a string variable and print it

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream out_file;
  out_file.open("hello.txt"); // opens file
  out_file << "Hello, World!";
  out_file.close();


  fstream in_file;
  in_file.open("hello.txt"); // opens file again

  // This is a standard loop to read each line. 
  if (in_file.is_open()) { 
    string temp;
    // While the file has lines, the data will be read. 
    while (getline(in_file, temp)) { 
        cout << temp << "\n"; 
    }
  in_file.close();


  return 0;
}
