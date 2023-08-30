/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Asks the user for a year as an inputs.
Then tells the user if that year was a leap or common year. 
*/

#include <iostream>
using namespace std;

void commonYear(){
  cout << "Common year" << endl;
}

void leapYear(){
  cout << "Leap year" << endl;
}

int main(){
  int year;

  cout << "Enter year: " ;
  cin >> year;
  cout << endl;

  if ((year % 4) != 0 ) {
    commonYear();
  } else if ((year % 100) != 0){
    leapYear();
  } else if ((year % 400) != 0){
    commonYear();
  } else {
    leapYear();
  }

  return 0;
}