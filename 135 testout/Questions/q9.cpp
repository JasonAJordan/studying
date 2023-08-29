// 9. Write the declarations and statements needed to write to the file results.txt in the same directory as
// the running program. Assume that the array Grade[100] contains 100 float values. Write the code that
// will output the contents of this array into the file, one number per line.

#include <iostream>
#include <fstream>
using namespace std;

void copy(int grades[], int size, ofstream& fout)
{
  if (fout.fail()) { return ; }
  for (int i = 0; i < size; i++){
    fout << grades[i] << endl;
  }

}
 


// Driver program only doing grade[5] for now
int main()
{ 
  ofstream out_file;
  int grades[5] = { 100, 90, 80, 95, 92};
  out_file.open("dataout.txt");
  int size = sizeof(grades) / sizeof(grades[0]); // <<<<<< THIS MAKES NO SENSE BUT SIZEOF RETURNS THE BITS SO YOU HAVE TO / sizeof(arr[0]) after! 
  cout << size;
  copy(grades, size, out_file);
  out_file.close();

  return 0;
}