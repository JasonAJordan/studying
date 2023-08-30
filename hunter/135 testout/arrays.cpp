// testing 
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int read_inputs(double inputs[], int capacity)  {
  int current_size = 0;
  cout << "Please enter values, Q to quit:" << endl;
  bool more = true;
  while (more) { 
    double input;
    cin >> input;
    if (cin.fail()) {
      more = false;
    } else if (current_size < capacity) {
      inputs[current_size] = input;
      current_size++;
    }
  }
  return current_size;
}

void multiply(double values[], int size, double factor) {
  for (int i = 0; i < size; i++)  {
    values[i] = values[i] * factor;
  }
}

void print(double values[], int size) {
  for (int i = 0; i < size; i++) {
    if (i > 0) { cout << ", "; }
    cout << values[i];
    }
 cout << endl;
}

int main()
{
  const int CAPACITY = 1000;
  double values[CAPACITY];
  int size = read_inputs(values, CAPACITY);
  multiply(values, size, 2);
  print(values, size);
  return 0;
}

