/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1C

Assuming that the input file formulas.txt looks as follows:

15 ;
10 + 3 + 0 + 25 ;
5 + 6 - 7 - 8 + 9 + 10 - 11 ;
When we run the program with that input, the output should evaluate all of the expressions and print them each on its own line:

$ ./calc2 < formulas.txt
15 
38
4

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
