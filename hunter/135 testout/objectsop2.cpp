#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  
using namespace std;

class CashRegister {
  public:
  void clear(); //Clears the item count and the total
  void add_item(double price);//adds an item to this cash
  //register and updates the total price
  double get_total() const; //returns the total amount
  //of the current sale
  int get_count() const; //return the item count of
  //the current sale

  private:
  int item_count;
  double total_price;
};

void CashRegister::clear() {
  item_count = 0;
  total_price = 0;
}
void CashRegister::add_item(double price) {
  item_count++;
  total_price = total_price + price;
}
double CashRegister::get_total() const {
  return total_price;
}
int CashRegister::get_count() const {
  return item_count;
}

void display(CashRegister reg) {
  cout << reg.get_count() << " $" 
  << fixed << setprecision(2) 
  << reg.get_total() << endl;
}

int main() {
  CashRegister register1;
  register1.clear();
  register1.add_item(1.95);
  display(register1);
  register1.add_item(0.95);
  display(register1);
  register1.add_item(2.50);
  display(register1);
  return 0;
}