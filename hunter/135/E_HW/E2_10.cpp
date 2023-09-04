/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10

Cost per 100 Miles

Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank
*/

#include <iostream>
using namespace std;

int main(){

  float gallons;
  float efficiency;
  float price;

  cout << "Enter number of gallons of gas in the tank: " << endl;
  cin >> gallons;

  cout << "Enter the fuel efficiency in miles per gallon: " << endl;
  cin >> efficiency;

  cout << "Enter the price of gas per gallon: " << endl;
  cin >> price;

  // 1x = 35(eff) 

  float costp100 = ( 100 / efficiency ) * price; 
  float dist = gallons * efficiency;

  cout << costp100 << endl;
  cout << dist << endl;


  return 0;
}
