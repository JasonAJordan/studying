/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 12

create a customer class w/ datamembers string name
and string unique_id. 

*/

#include <iostream>

using namespace std;

class Customer {


  public:
  Customer();
  Customer(string name, string id);
  string get_name();
  string get_unique_id();
  void set_name(string name);
  void set_unique_id(string id);

  private:
  string name;
  string unique_id;


};

string Customer::get_name(){
  return this->name;
}

string Customer::get_unique_id(){
  return this->unique_id;
}

void Customer::set_name(string n){
  this->name = n;
}


void Customer::set_unique_id(string n){
  this->unique_id = n;
}

Customer::Customer(){

}

Customer::Customer(string n, string id){
    this->name = n;
    this->unique_id = id;
}





// Money::Money(int x, int y){
//   this->dollars = x;
//   this->cents = y;
// }

// Money withdraw_money(Money x, Money y){

//   int cents =  x.cents - y.cents ;

//   int dollars = x.dollars - y.dollars  ;

//   if (cents < 0){
//     dollars = dollars - 1;

//     cents = 100 + cents;

//   }
//   if (dollars <= 0){
//     dollars = 0;
//     cents = 0;
//   }

//   Money m3 = Money (dollars, cents );
//   return m3;
// }




