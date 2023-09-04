/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E4.8

Write a program that reads a word and prints each character of the word on a separate line. For example, if the user provides the input "Harry", the program prints
h
a
r
r
y
*/

#include <iostream>
using namespace std;



int main(){

  string word;

  cout << "Enter a word: " << endl;
  cin >> word;

  for (int i = 0; i < word.length(); i++){
    cout << word[i] << endl;
  }

  return 0;

}
