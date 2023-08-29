//11. Write C++ code to create a dynamically allocated array of 100 floating point numbers named data.
#include <iostream>
// #include <fstream>
using namespace std;



// Driver program only doing arr[15] for now
int main()
{ 
  int x, n = 15;
	// cout << "Enter the number of items:" << "\n";
	// cin >>n;
	int *arr = new int(15);
	// cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
        arr[x] = rand() % 11;
	}
	cout << "random array values: ";

	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}

  return 0;
}
