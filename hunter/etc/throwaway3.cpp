//Sample input/output:
//Enter your age: 20
//Enter the country you would like to visit in five years: Canada
//You want to visit Canada when you are 25.
#include <iostream>
#include <string>
using namespace std;
 int main() {
 cout << "Enter your age: ";
 int age;
 cin >> age;

 cout << "Enter the country you would like to visit in five years: ";
 string country;
 cin >> country;

 cout << "You want to visit " << country
 << " when you are " << age + 5 << "." << endl;
  return 0;
}