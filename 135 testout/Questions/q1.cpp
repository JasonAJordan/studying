// 1. Write a function that, given a float array parameter named scores, and an integer size that stores
// the length of the array, returns the average value in the array, or 0 is the array is empty.


#include <iostream>
using namespace std;

int q1( float arr[], int n){
  int sum = 0;
  float avg = 0;

  if (n == 0){
    cout<< "arry is empty";
    return 0;
  }

  for (int i = 0; i<n ; i++){
    sum =+ arr[i];
  }
  // cout<< sum << "Tasdf "<< n;
  avg = (float)sum / n;

  cout<<"The array avg is "<< avg;
  return avg;
}

int main(){
  float arr[] = { 2, 5, 7, 8, 2, 6, 9 };
  //int n = 7;
  int n = sizeof(arr) / sizeof(arr[0]);
  q1(arr, n);


  string x = "a";
  string *q = &x;
  *q = *q + "a";
  cout << *q ;
  return 0;
}

