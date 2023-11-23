#include <string>
#include <iostream>
#include "Board.hpp"

#include <vector>
#include <iomanip>

// #include <cstdlib>
// #include <ctime>

using namespace std;



//construct a 3 x 3 panel
Board::Board(){
  //int count = 1; // count is for testing noAdjacentSameValue()

  panel = new int* [3];
  for(int i = 0; i < 3; i++) { // for each row
    panel[i] = new int[3] ;
    for (int j = 0; j < 3; j++){
      panel[i][j] = 0;

      // panel[i][j] = count;
      // count++; 
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

// // +----+----+----+
// // |    |    |    |
// // +----+----+----+
// // |    |    |    |
// // +----+----+----+
// // |    |    |    |
// // +----+----+----+
// // prints board 
void Board::print() const {
  for (int r = 0; r < numRows; r++){

    string rowBorder = "+";
    string rowSquares = "|";
    for (int c = 0; c < numCols; c++){
      rowBorder += "----+";
      int num = panel[r][c];
      // cout << num << endl;
      if (num > 99){ // my lazy ways can't be helped
        rowSquares += " " + to_string(num) + "|";
      } else if (num > 9){
        rowSquares += "  " + to_string(num) + "|";
      } else if (num > 0){
        rowSquares += "   " + to_string(num) + "|";
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


struct Location {
  int row;
  int col;
}; 

void Board::selectRandomCell (int& row, int& col){
  //  Declare a vector of Locations called zeros.
  //  Declare a variable of Location called cell.
  vector<Location> zeros;
  Location cell;
  int count = 0;

  // Making a vector of all open spaces
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0){
        cell.row = i;
        cell.col = j;
        zeros.push_back(cell);
        count++;
      }
    }
  }

  if (zeros.size() > 0){
     int index = rand() % zeros.size();
     int row = zeros[index].row;
     int col = zeros[index].col;
     this->panel[row][col] = 1;
     this->print();
  } 
  // else if (zeros.size() <= 1){
  if (zeros.size() <= 1) { 
    //this->print();
    if (noAdjacentSameValue()){
      if (max < target){
        cout << "Game over. Try again." << endl;
      } else {
        cout << "Congratulations!" << endl;
      }
      exit(0);
    }
  } 
  
  return; 
};

bool Board::noAdjacentSameValue() const {
  for (int c = 0; c < numCols; c++){
  for (int r = 0; r < numRows; r++){
    int curr = panel[c][r];
    // [1] [2] [4]
    // [8] [16] [16]
    // [64] [128] [356]

    bool top =  (r == 0) ? false : (curr == panel[c][r - 1]);
    bool right = (c == numCols - 1) ? false : (curr == panel[c + 1][r]);
    bool bot = (r == numRows - 1) ? false : (curr == panel[c][r + 1]);
    bool left = (c == 0 ) ? false : (curr == panel[c][r - 1]);


    if (top || right || bot || left ){
      return false;
    }
    }
  }
  return true;

};

void Board::pressUp() {
  // cout << "RUNNING" << endl;
  for (int r = 0; r < numRows; r++){
    for (int c = 0; c < numCols; c++){
      int curr = panel[r][c];
      for (int n = r + 1; n < numRows; n++){
        // cout << "RUNNING testaaa" << n << numRows << endl;
        // [] [0] []  -> [] [1] [] -> [] [2] [] 
        // [] [1] []  -> [] [] []  -> [] [] []
        // [] [1] []  -> [] [1] [] -> [] [] []
        // Loop 1 -> 0 skips
        // loop 2 -> moves one to current 
        // loop 3 -> combines 

        int next = panel[n][c];
        if (next == 0) continue;
        else if (curr == 0){ // next is a value but curr is empty
          this->panel[r][c] = next;
          curr = next;
          this->panel[n][c] =  0;
          //break; // can only combine once 

        } else if (curr == next) { // combines
          this->panel[r][c] = curr * 2;
          //curr = curr * 2;
          this->panel[n][c] = 0;
          break; // can only combine once 
        } else { // two values that can't combine  
          break; // just skip 
        }

      }

    }

  }
  // this->print();
  int one = 1;
  int two = 2;
  this->selectRandomCell(one,two);

};

void Board::pressDown() {
  for (int r = numRows - 1; r >= 0; r--){
    for (int c = 0; c < numCols; c++){
      int curr = panel[r][c];
      for (int n = r - 1; n >= 0; n--){
        // [] [1] []  -> [] [1] [] -> [] [] [] 
        // [] [1] []  -> [] [] []  -> [] [] []
        // [] [0] []  -> [] [1] [] -> [] [2] []
        // Loop 1 -> 0 skips
        // loop 2 -> moves one to current 
        // loop 3 -> combines 
        
        int next = panel[n][c];
        if (next == 0) continue;
        else if (curr == 0){ // next is a value but curr is empty
          this->panel[r][c] = next;
          curr = next;
          this->panel[n][c] =  0;
          //break; // can only combine once 

        } else if (curr == next) { // combines
          this->panel[r][c] = curr * 2;
          //curr = curr * 2;
          this->panel[n][c] = 0;
          break; // can only combine once 
        } else { // two values that can't combine  
          break; // just skip 
        }

      }
    }
  }

  int one = 1;
  int two = 2;
  this->selectRandomCell(one,two);

};


void Board::pressLeft() {
  // cout << "RUNNING" << endl;
  for (int r = 0; r < numRows; r++){
    for (int c = 0; c < numCols; c++){
      int curr = panel[r][c];
      for (int n = c + 1; n < numCols; n++){
        int next = panel[r][n];
        if (next == 0) continue;
        else if (curr == 0){ // next is a value but curr is empty
          this->panel[r][c] = next;
          curr = next;
          this->panel[r][n] =  0;
          //break; // can only combine once 

        } else if (curr == next) { // combines
          this->panel[r][c] = curr * 2;
          //curr = curr * 2;
          this->panel[r][n] = 0;
          break; // can only combine once 
        } else { // two values that can't combine  
          break; // just skip 
        }
      }
    }
  }
  // this->print();
  int one = 1;
  int two = 2;
  this->selectRandomCell(one,two);

};


void Board::pressRight() {
  for (int r = 0; r < numRows; r++){
    for (int c = numCols - 1; c >= 0; c--){
      int curr = panel[r][c];
      for (int n = c - 1; n >= 0; n--){

        int next = panel[r][n];
        if (next == 0) continue;
        else if (curr == 0){ // next is a value but curr is empty
          this->panel[r][c] = next;
          curr = next;
          this->panel[r][n] =  0;
          //break; // can only combine once 

        } else if (curr == next) { // combines
          this->panel[r][c] = curr * 2;
          //curr = curr * 2;
          this->panel[r][n] = 0;
          break; // can only combine once 
        } else { // two values that can't combine  
          break; // just skip 
        }

      }
    }
  }

  int one = 1;
  int two = 2;
  this->selectRandomCell(one,two);

};


void Board::start(){
  int round = 1;
  int one = 1;
  int two = 2;
  this->selectRandomCell(one,two);
  this->selectRandomCell(one,two);
  char ch;

  while (true){
    for (int i =0; i < numCols; i++){
      for (int j = 0; j < numRows; j++){
        if (panel[i][j] > max){
          this->max = panel[i][j];
        }
      }
    }


    if (max >= target){ // incase of some strange target value
      cout << "Congratulation!" << endl;
      //exit(0);
      break;
    }
    ch = getchar();
    if (ch == 'S'){
      break;
    }

    //cout << "In while loop" << endl;
    //reference: https://stackoverflow.com/questions/10463201/getch-and-arrow-codes
    if (ch == '\033'){ // if the first value is esc
    //zcout << " testing" << endl;
      getchar(); // skip the [
      switch(getchar()) { // the real value
        case 'A':
          // code for arrow up
          cout << "Round " << setw(4) << round << ": ";
          cout << "Press UP. " 
            << "Goal: " << target << endl;
          pressUp();
          round++;
          break;
        case 'B':
          // code for arrow down
          cout << "Round " << setw(4) << round << ": ";
          cout << "Press DOWN. "
            << "Goal: " << target << endl;
          pressDown();
          round++;
          break;
        case 'C':
            // code for arrow right
            cout << "Round " << setw(4) << round << ": ";
            cout << "Press RIGHT. "
              << "Goal: " << target << endl;
            pressRight();
            round++;
            break;
        case 'D':
            // code for arrow left
            cout << "Round " << setw(4) << round << ": ";
            cout << "Press LEFT. "
              << "Goal: " << target << endl;
            pressLeft();
            round++;
            break;
        //You finish the rest code
        } //end of switch
      } //end of if
  } //end of while
}
