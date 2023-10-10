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

void swap(int arr[], int n){

  // cout << n << endl;
  if (n % 2 == 0){
    for (int i = 0; i < n/2 ; i++){
      int temp = arr[i] ;
      arr[i] = arr[n/2 + i] ;
      arr[n/2 + i] = temp ;
    }
  }
  //return arr;
  //arr[0] == 0;
}

int main(){

  int arr[] = {1,2,4,6};
  swap(arr, 4);
  printArray(arr,4);

  return 0;
}
