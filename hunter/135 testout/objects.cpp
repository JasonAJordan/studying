#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  
using namespace std;

class StreetAddress {
  public:
  int house_number;
  string street_name;
};

class Employee {
  public:
  string name;
  StreetAddress* office; // I get pointers now, they are for shared classes
};

void print_address(StreetAddress address) {
  cout << address.house_number << " " <<address.street_name;
}

void print_employee(Employee e){
  cout << e.name << " working at ";
  print_address(*e.office); // if pointer need * before the whole object it self
}

int main() {
  cout << "A dynamically allocated object" << endl;
  StreetAddress* address_pointer = new StreetAddress;
  address_pointer->house_number = 1600;
  address_pointer->street_name = "Pennsylvania Avenue";
  print_address(*address_pointer);

  delete address_pointer;
  cout<< endl << "Two employees in the same office" <<endl;
  StreetAddress accounting;
  accounting.house_number = 1729;
  accounting.street_name = "Park Avenue";
  Employee harry;
  harry.name = "Smith, Harry";
  harry.office = &accounting; // Pointer
  Employee sally;
  sally.name = "Lee, Sally";
  sally.office = &accounting;

  cout << "harry: ";
  print_employee(harry);
  cout << endl;

  cout << "sally: ";
  print_employee(sally);
  cout << endl;

  cout << "After accounting office move" << endl;
  accounting.house_number = 1720;
  cout << "harry: ";
  print_employee(harry);

  cout << endl;
  cout << "sally: ";
  print_employee(sally);

  cout << endl;
  return 0;
}