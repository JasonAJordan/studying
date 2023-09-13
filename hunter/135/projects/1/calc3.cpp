/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D

When reading input file formulas.txt

5^;
1000 + 6^ - 5^ + 1;
the program should report:

$ ./calc3 < formulas.txt
25
1012

*/

#include <iostream>
#include <cmath> // for pow()
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

  // part d
  if (i == '^'){
    // I know it seems dumb to convert str to int then back but it works nicely 
    temp = to_string(pow(stod(temp),2));
  }

  // part c
  if  (i == ';'){
  total = newTotal(addOrSub, total, temp);
  temp = "";
  addOrSub = true;
  cout << total << endl;
  total = 0;
  continue;
  }

  temp += i;
  }


  // total = newTotal(addOrSub, total, temp);
  // cout << total << endl;
    
  return 0;
}