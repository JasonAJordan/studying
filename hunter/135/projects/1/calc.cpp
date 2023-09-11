/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1B

We want to make a simple calculator that can add and subtract integers,
 and will accept arbitrarily long mathematical formulas composed of symbols +, -, 
 and non-negative integer numbers.

*/

#include <iostream>

using namespace std;

int newTotal (bool addOrSub, int total, string num){
  if (addOrSub){
    total += stod(num);
  } else {
    total -= stod(num);
  }
  return total;
}


int main() {
  char i;
  int total = 0;
  bool addOrSub = true;
  string temp = "";

  while(cin >> i) { // While the reading operation is a success
  if (i == '-'){
    total = newTotal(addOrSub, total, temp);
    temp = "";
    addOrSub = false;
    continue;
  } 
  if  (i == '+'){
    total = newTotal(addOrSub, total, temp);
    temp = "";
    addOrSub = true;
    continue;
  }
  temp += i;
  }

  total = newTotal(addOrSub, total, temp);
  cout << total << endl;
    
  return 0;
}
