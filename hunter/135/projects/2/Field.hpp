#ifndef FIELD_H //include guard
#define FIELD_H
#include<string>

#include <iostream>
using namespace std;

class Field {

  private:
  int* cells;
  bool* checked;
  int size;
  int num_mines;


 public:
  void printArray(); // my helper

  Field(); //constructor
  Field(int size, int num_mines);
//  ~Field(); //destructor
//  std::string to_string() const;
//  std::string answer_string() const;

//  //std::string neighbor() const;
//  std::string empty() const;
 int get_size() const;
 int get_num_mines() const;
//  int neighbor_mines(int index) const;
//  void set_checked(int index);
//  bool is_checked(int index) const;
//  bool has_mine(int index) const;

};

// Function to print an array, this is code I will use on a lot of problems. 
void printArray2(int arr[], int size)
{
 cout << "printing init arry for cells" << endl;

    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray3(bool arr[], int size){
 cout << "printing init arry for bools" << endl;

    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// Default values are 7 for size and 2 for num of mines
Field::Field(){

  int *cells_arr = new int[7];
  // I do not want to use other libraries  that can do this just in case of a grade scope error. 
  for (int i = 0; i < 7; ++i){
  cells_arr[i] = -1;
  }

  bool *checked_arr = new bool[7];
  for (int i = 0; i < 7; ++i){
  checked_arr[i] = false;
  }

  size = 7;
  num_mines = 2;
  cells = cells_arr;
}



Field::Field(int size_, int num_mines){
  cout << size_ << num_mines << endl;

  int *cells_arr = new int[size_];
  // I do not want to use other libraries  that can do this just in case of a grade scope error. 
  for (int i = 0; i < size_; ++i){
  cells_arr[i] = -1;
  }

  printArray2(cells_arr, size_);

  bool *checked_arr = new bool[size_];
  // I do not want to use other libraries  that can do this just in case of a grade scope error. 
  for (int i = 0; i < size_; ++i){
  checked_arr[i] = false;
  }

  printArray3(checked_arr, size_);

  size = size_;
  num_mines = num_mines;
  cells = cells_arr;
}

 int Field::get_size() const{
  return size;
 }
 int Field::get_num_mines() const{
  return num_mines;
 }



// I use this function to check my work from Game.hpp
// Function to print an array, this is code I will use on a lot of problems. 
void Field::printArray(){
  cout << "Printing cells" << endl;
  cout << size << ", " << num_mines << endl;
  int i;
  for (i = 0; i < size; i++) {
      cout << cells[i] << " ";
  }
  cout << endl;
}


#endif