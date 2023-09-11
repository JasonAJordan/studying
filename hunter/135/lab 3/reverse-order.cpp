/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3D

Write a program reverse-order.cpp which asks the user to input two dates 
(earlier date then later date). The program should report the West basin 
elevation for all days in the interval in the reverse chronological order 
(from the later date to the earlier).

Example:
$ ./reverse-order
Enter earlier date: 05/29/2018
Enter later date: 06/02/2018
 
06/02/2018  590.32 ft
06/01/2018  590.26 ft
05/31/2018  590.24 ft
05/30/2018  590.23 ft
05/29/2018  590.22 ft

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <vector>

using namespace std;


void printVector(vector<string> a, vector<double> b, int size)
{
    int i;
    for (i = size - 1; i >= 0 ; i--) {
        cout << a[i] << " " << b[i] << " ft" << endl;
    }
}

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

  string startingDate;
  string endingDate;
  bool recordingFlag = false;

  vector<string> vect = {}; 
  vector<double> vect2 = {};

  cout << "Enter earlier date (MM/DD/YYYY): " << endl;
  cin >> startingDate;

  cout << "Enter later date (MM/DD/YYYY): " << endl;
  cin >> endingDate;

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file 

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    if (startingDate == date){
      recordingFlag = true;
    }
    if (recordingFlag){
      // string temp = date + " " + to_string(westEl) + " ft";
      // to_string keeps laging zeros .0000000
      // going to use two vectors
      vect.push_back(date);
      vect2.push_back(westEl);
    }
    if (endingDate == date){
      recordingFlag = false;
      break;
    }

  }

  printVector(vect, vect2, vect.size());


  fin.close();

  return 0;
}