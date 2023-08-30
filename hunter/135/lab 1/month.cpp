/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D

Asks the user for the year and the month an inputs, 
Then tells the user how many days were in that month. 
I used Lab1C for the leap year logic then used if/else and ternary operators to set the value for days
At the end I cout the number of days.
*/

#include <iostream>
using namespace std;


int main(){
  int year;
  int month;
  bool isLeap;
  int days;

  cout << "Enter year: " ;
  cin >> year;
  cout << endl;
  cout << "Enter month: " ;
  cin >> month;
  cout << endl;


  if ((year % 4) != 0 ) {
    isLeap = false;
  } else if ((year % 100) != 0){
    isLeap = true;
  } else if ((year % 400) != 0){
    isLeap = false;
  } else {
    isLeap = true;
  }

  if (month <= 7){
    days = (month % 2 == 0) ? 30 : 31;

    // This if will overwrite the day count if it's feb. 
    if (month == 2){
      days = (isLeap) ? 29 : 28;
    } 
  } else {
    days = (month % 2 == 0) ? 31 : 30;
  }

  cout << days << " days" << endl;

  return 0;
}