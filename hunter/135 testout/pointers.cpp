// testing 
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  
using namespace std;

// – Pointers allow sharing of values stored in variables
// in a uniform way
// – Pointers can refer to values that are allocated on
// demand (dynamic memory allocation)
// – Pointers are necessary for implementing
// polymorphism, an important concept in
// object-oriented programming (later)

// int main() {
//   double harrys_account = 0;
//   double joint_account = 2000;
//   double* account_pointer = &harrys_account;
//   *account_pointer = 1000; // Initial deposit
//   // Withdraw $100
//   *account_pointer = *account_pointer - 100;
//   // Print balance
//   cout << "Balance: " << *account_pointer << endl;
//   // Change the pointer value so that the same
//   // statements now affect a different account
//   account_pointer = &joint_account;
//   // Withdraw $100
//   *account_pointer = *account_pointer - 100;
//   // Print balance (of joint account)
//   cout << "Balance: " << *account_pointer << endl;
//   return 0;
//   }

void print(int* values[], int size) {
  for (int i = 0; i < size; i++) {
    if (i > 0) { cout << ", "; }
      for (int j = 0; j <= i; j++) {
        cout << setw(4) << values[i][j];
      }
    cout << endl;
    }
 cout << endl;
}

// Array of pointers 

int main() {
  srand(time(0));
  int* counts[10];



  // Allocate the rows
  for (int i = 0; i < 10; i++) {
    counts[i] = new int[i + 1];

    for (int j = 0; j <= i; j++) {
      counts[i][j] = 0;
    }

  }

  print(counts, 10);

  const int RUNS = 1000;
  // Simulate 1,000 balls
  for (int run = 0; run < RUNS; run++) {
    // Add a ball to the top
    counts[0][0]++;
    // Have the ball run to the bottom
    int j = 0;
    for (int i = 1; i < 10; i++) {
      int r = rand() % 2;
      // If r is even, move down,
      // otherwise to the right
      if (r == 1) {
        j++;
      }
    counts[i][j]++;
    }
  }

  // Print all counts
  for (int i = 0; i < 10; i++)  {
    for (int j = 0; j <= i; j++) {
      cout << setw(4) << counts[i][j];
      }
    cout << endl;
  }

  // Deallocate the rows
  for (int i = 0; i < 10; i++) {
    delete[] counts[i];
  }
  return 0;
}