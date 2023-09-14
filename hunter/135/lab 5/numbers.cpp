/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5

Write a program numbers.cpp that defines a function

bool isDivisibleBy(int n, int d);
isDivisibleBy(100, 25) == true
isDivisibleBy(35, 17) == false

In the same program numbers.cpp, add a function
bool isPrime(int n);

*/

#include <iostream>
using namespace std;


bool isDivisibleBy(int n, int d){
  if (d == 0) return false;
  if (n % d  == 0){
    return true;
  } else {
    return false;
  }
}

bool isPrime(int n){
  // just plugging in the edge cases
  if (n <= 1) return false;

  for (int i = 2 ; i < n ; i++){
    if (n % i == 0){
      return false;
    }
  }
  return true;
}

int nextPrime(int n){
  // bool found = false;
  int n2 = n + 1;

  while (!isPrime(n2)){
    // found = (isPrime(n2));
    n2++;
  }
  return n2;
};


int countPrimes(int a, int b){
  int count = 0;
  for (int i = a; i <= b; i++){
    if (isPrime(i)){
      // cout << i << " ";
      count++;
    }
  }
  return count;
};

bool isTwinPrime(int n){
  bool isBasePrime = isPrime(n);
  bool lowerTwinCheck = isPrime(n-2);
  bool uppperTwinCheck = isPrime(n+2);

  if ((isBasePrime && lowerTwinCheck) || ( isBasePrime && uppperTwinCheck)){
    return true;
  } 
  return false;
}

// pretty much same as nextPrime();
int nextTwinPrime(int n){
  int n2 = n + 1;

  while (!isTwinPrime(n2)){
    n2++;
  }
  return n2;
}

int largestTwinPrime(int a, int b){
  int largest = -1;
  for (int i = b; i >= a; i--){
    if (isTwinPrime(i)){
      largest = i;
      break;
    }
  }
  return largest;
}

// Driver function if needed
int main(){

  // cout << isPrime(5); 
  // cout << nextPrime(5); 
  // // cout << "asdf" << isPrime(6);
  // cout << countPrimes(1, 20);
  return 0;
}
