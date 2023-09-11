/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3A

Write a program east-storage.cpp that asks the user to input a 
string representing the date (in MM/DD/YYYY format), and prints 
out the East basin storage on that day.

$ ./east-storage
Enter date: 05/20/2018
East basin storage: 80.96 billion gallons

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
  string inputDate;
  string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;

  cout << "Enter date (MM/DD/YYYY): " << endl;
  cin >> inputDate;

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file 

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    // I do not need this code but I will leave is commented out for reference 
    // // for example, to print the date and East basin storage:
    // cout << date << " " << eastSt << endl;

    // if the inputData matches the result will be cout'd
    if (inputDate == date){
      cout << "East basin storage: " << eastSt << " billion gallons" << endl;
    }
  }

  fin.close();

  return 0;
}
