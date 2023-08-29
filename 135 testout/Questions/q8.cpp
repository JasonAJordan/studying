// 8. Write the declarations and statements needed to read from a file named datain.txt in the same directory
// as the running program. Assume that the file contains one integer per line. Write the code that will
// add all of the numbers in the file and display the sum on the screen.
#include <iostream>
#include <fstream>
using namespace std;


int get_sums(ifstream& in_file){
  int total = 0;
  int count;
  string line;

  if (in_file.fail()) { return 0; }
  while (in_file >> count)  //reading a line from the file while possible
  {
      total = total + count;    // convert string to number and add it to the sum
      cout << total << " " << count << endl;
  }



  return total;
}

// Driver program
int main()
{ 
  int sum;
  ifstream in_file;
  in_file.open("datain.txt");

  sum = get_sums(in_file);
  in_file.close();
  return 0;
}