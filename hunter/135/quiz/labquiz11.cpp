/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 11



*/

#include <iostream>

using namespace std;

class Money {
  public:
    int dollars;
    int cents;

    Money(int x, int y);

};

Money::Money(int x, int y){
  this->dollars = x;
  this->cents = y;
}

Money withdraw_money(Money x, Money y){

  int cents =  x.cents - y.cents ;

  int dollars = x.dollars - y.dollars  ;

  if (cents < 0){
    dollars = dollars - 1;

    cents = 100 + cents;

  }
  if (dollars <= 0){
    dollars = 0;
    cents = 0;
  }

  Money m3 = Money (dollars, cents );
  return m3;
}




