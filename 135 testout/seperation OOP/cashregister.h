#ifndef CASHREGISTER_H
#define CASHREGISTER_H

class CashRegister {

  public:
  void clear();
  void add_item(double price);
  double get_total() const;
  int get_count() const;


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

#endif