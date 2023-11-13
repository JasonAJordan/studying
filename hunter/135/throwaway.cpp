#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <vector>

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

class Triangle {
  public:           // Access specifier
  Triangle(int a, int b, int c) {     // Constructor
    bool cond1 = (a + b) > c ? true : false;
    bool cond2 = (a + c) > b ? true : false;
    bool cond3 = (c + b) > a ? true : false;

    bool condSides = ( cond1 || cond2 || cond3 ) ? true : false;
    if (a > 0 && b > 0 && c > 0 && condSides){
        this->a = a;
        this->b = b;
        this->c = c;
      } else {
        this->a = 1;
        this->b = 1;
        this->c = 1;
      }
  }
                    
  private:
  int a;
  int b;
  int c;
};


int main(){

  // int arr[] = {1,2,4,6};
  // swap(arr, 4);
  // printArray(arr,4);

  // int m = 1265 % 1000;
  // cout << m << endl;
  // int c = m / 100;
  // cout << c << endl;
  // srand((unsigned int)time(NULL)); // better rands by seeding
  // int i = ( rand()) % 10; // asdf
  // int n = ( rand() ) % 5 - 4;
  // float r = rand() % (21 - 10) + 10; // [10,20]
  // cout << i << "  " << n << " " << r << endl;

  vector<int> num(4);
  num.push_back(4);
  num[0] = 1;
  cout << num.size() << " " << num[0] << " "<< num[5];

  return 0;
}
