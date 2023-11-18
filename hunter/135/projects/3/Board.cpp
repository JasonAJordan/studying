#include <string>
#include <iostream>
#include "Board.hpp"

//#include <cstdlib>
//#include <ctime>

using namespace std;


//construct a 3 x 3 panel
Board::Board(){

  panel = new int* [3];
  for(int i = 0; i < 3; i++) { // for each row
    panel[i] = new int[3] ;
    for (int j = 0; j < 3; j++){
      panel[i][j] = 0;
    }
  }

  this->panel = panel;
  this->numRows = 3;
  this->numCols = 3;
  this->max = 0;
  this->target = 32;
}

//construct a m x m panel
Board::Board(int m){
  int size = (m >= 1) ? m : 3;

  panel = new int* [size];
  for(int i = 0; i < size; i++) {
    panel[i] = new int[size];
    for (int j = 0; j < size; j++){
      panel[i][j] = 0;
    }
  }

  this->panel = panel;
  this->numRows = size;
  this->numCols = size;
  this->max = 0;
  this->target = 32;
}

//construct a m x n panel
Board::Board(int m, int n){
  int sizeRows = (m >= 1) ? m : 3;
  int sizeCols = (n >= 1) ? n : 3;
  panel = new int* [sizeCols];
  for(int i = 0; i < sizeRows; i++) {
    panel[i] = new int[sizeCols];
    for (int j = 0; j < sizeCols; j++){
      panel[i][j] = 0 ;
    }
  }

  this->panel = panel;
  this->numRows = sizeRows;
  this->numCols = sizeCols;
  this->max = 0;
  this->target = 32;
}

//destructor,
//when no longer need the current object,
//release dynamic memory of this object.
Board::~Board() {
  for(int i = 0; i < numRows ;i++) {
    delete []panel[i];
  }
  delete []panel;
 
 panel = NULL;
}

// +----+----+----+
// |    |    |    |
// +----+----+----+
// |    |    |    |
// +----+----+----+
// |    |    |    |
// +----+----+----+
// prints board 
void Board::print() const {
  for (int r = 0; r < numRows; r++){

    string rowBorder = "+";
    string rowSquares = "|";
    for (int c = 0; c < numCols; c++){
      rowBorder += "----+";
      int num = panel[r][c];
      // cout << num << endl;
      if (num > 0){
        rowSquares += "  " + to_string(num) + "  |";
      } else {
        rowSquares += "    |";
      }
    }
    if (r == 0 ){
      cout << rowBorder << endl;
    }
    cout << rowSquares << endl << rowBorder << endl;
  }
}

int Board::getNumRows() const{
  return numRows;
}

int Board::getNumCols() const{
  return numCols;
}

int Board::getTarget() const{
  return target;
}

int Board::getMax() const{
  return max;
}