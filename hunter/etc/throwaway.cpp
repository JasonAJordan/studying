#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>


using namespace std;


int main() {

  // From code from instructions
  ifstream fin("asdf.tsv");
  if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }


  // defining the vars for the given example code. 
  string etc;
  double one;
  double two;
  double diff;
// .3447

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file 

  while(fin >> etc >> one >> two ) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    
    // fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
    //                       //ignorring the remaining columns 

    diff = diff + (one - two);
    // cout << one << " " << two << " " <<(one - two) << endl;
    cout << one - two <<", ";
  }

  fin.close();
  diff = diff / 20;
  cout << diff;

  return 0;
}