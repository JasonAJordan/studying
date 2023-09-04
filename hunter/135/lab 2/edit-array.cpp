/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Write a program edit-array.cpp that creates an array of 10 integers,
and provides the user with an interface to edit any of its elements.


*/

#include <iostream>
using namespace std;

// Function to print an array, this is code I will use on a lot of problems. 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
  int array[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int idx;
  int value;
  do{
    printArray(array, 10);

    cout << "Input index: " ;
    cin >> idx;
    cout << "Input value: " ;
    cin >> value;

    if ((idx < 0) || (idx > 9 ) ){
      cout << "Index out of range. Exit." << endl;
      break;
    }
    array[idx] = value;

  } while ((idx >= 0) && (idx <= 9 ));


  return 0;
}
