#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
  int arr[6];
  int arr2[] = {0, 0, 0, 0, 0, 6};

  printArray(arr2, 8);

  return 0;
}