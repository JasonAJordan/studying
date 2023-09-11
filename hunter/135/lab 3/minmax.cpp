/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3B

Write a program minmax.cpp that finds the minimum and maximum storage in East basin in 2018.

Example (using made up numbers):
$ ./minmax
minimum storage in East basin: 59.88 billion gallons
MAXimum storage in East basin: 81.07 billion gallons

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>


using namespace std;


int main() {

  // From code from instructions
  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }


  // defining the vars for the given example code. 
  string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;

  double min = 1.7976931348623157E+308; // max value for doubles 
  double max = 0;

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file 

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 


    // simple compare then change
    if (min > eastSt){
      min = eastSt;
    }
    if (max < eastSt){
      max = eastSt;
    }
  }

  cout << "minimum storage in East basin: " << min << " billion gallons" << endl;
  cout << "MAXimum storage in East basin: " << max << " billion gallons" << endl;

  fin.close();

  return 0;
}
