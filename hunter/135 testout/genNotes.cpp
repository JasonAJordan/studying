// testing 
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// int main()
// {
//   int j = 1;
//   do
//   {
//   int value = j * 2;
//   j++;
//   cout << value << ", ";
//   } while (j <= 5);
// }

// int main()
// {
//   int j = 1;

//   while (j <= 5) {
//     int value = j * 2;
//     j++;
//     cout << value << ", ";
//   } 
// }

// int main()
// {
//   double sum = 0;
//   int count = 0;
//   double salary = 0;
//   // get all the inputs
//   cout << "Enter salaries, -1 to finish: ";
//   while (salary != -1){
//     if (salary != 0){
//       cout << salary << ", ";
//     }
//     cin >> salary;
//     if (salary != -1){
//       sum = sum + salary;
//       count++;
//     }
//   }
//   // process and display the average
//   if (count > 0) {
//     double average = sum / count;
//     cout << "Average salary: " << average << endl;
//   } else {
//   cout << "No data" << endl;
//   }
//   return 0;
// }

// int main() {
//   srand(time(0)); //seed the generator
//     for (int i = 1; i <= 10; i++) { // 10 tosses 
//       int d1 = rand() % 6 + 1;
//       int d2 = rand() % 6 + 1;
//       int d3 = rand(); // max rand is at 32767
//       cout << d1 << " " << d2 << " " << d3 << endl;
//     }
//   cout << endl;
//   return 0;
// } 
// void withdraw(double& balance, double amount) {
//   const int PENALTY = 10;
//   if (balance >= amount)
//   {
//   balance = balance - amount;
//   }
//   else
//   {
//   balance = balance - PENALTY;
//   }
//   cout << balance << endl;
// }

// int main(){
//   double harrys_account = 1000;
//   double sallys_account = 500;
//   withdraw(harrys_account, 100);
//   // Now harrys_account is 900
//   withdraw(harrys_account, 1000); // Insufficient funds
//   // Now harrys_account is 890
//   withdraw(sallys_account, 150);
//   cout << "Harry's account: " << harrys_account << endl;
//   cout << "Sally's account: " << sallys_account << endl;
//   return 0;
// }


// Binary search
// bool found = false;
// int low = 0, high = size - 1;
// int pos = 0;
// while (low <= high && !found)
// {
// pos = (low + high) / 2; // Midpoint of the subarray
// if (values[pos] == searched_value)
// { found = true; }
// else if (values[pos] < searched_value)
// { low = pos + 1; } // Look in second half
// else { high = pos - 1; } // Look in first half
// }
// if (found)
// { cout << "Found at position " << pos; }

int read_inputs(double inputs[], int capacity){ 
  //returns the # of elements read, as int
  int current_size = 0;
  double input;
  while (cin >> input) {
  if (current_size < capacity) {
    inputs[current_size] = input;
    current_size++;
    }
  }
  return current_size;
  }

int main(){
  int cz = 0;
  int numb = 10;
  double scores[numb] = { 32, 54, 67.5, 29, 34.5, 80, 115, 44.5, 100, 65 };

  cz = read_inputs(scores, numb);
  cout << cz << " : " << endl;
  for (int i = numb - 1; i >= 0; i--) 
    cout << scores[i] << " ";
  return 0;
}


