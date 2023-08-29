#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  
#include "cashregister.h"

using namespace std;



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