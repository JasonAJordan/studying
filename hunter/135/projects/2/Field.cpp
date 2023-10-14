#ifndef FIELD_C //include guard
#define FIELD_C


#include <string>
#include <iostream>
#include "Field.hpp"

//#include <cstdlib>
//#include <ctime>

using namespace std;

// class Field {

//   private:
//     int* cells;
//     bool* checked;
//     int size;
//     int num_mines;

//   public:
//     void printArray(); // my helper

//     Field(); //constructor
//     Field(int size, int num_mines);
//     ~Field(); //destructor
//     std::string to_string() const;
//     std::string answer_string() const;

//     // std::string neighbor() const; // 
//     std::string empty() const;
//     int get_size() const;
//     int get_num_mines() const;
//     int neighbor_mines(int index) const;
//     void set_checked(int index);
//     bool is_checked(int index) const;
//     bool has_mine(int index) const;

// };

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
  // Work on trying to make the default run the non-default later
  // Field(7, 2);

  // cout << "In default con" << endl;
  // cout << "Saving the a Field with a size of " << size << " And mines of " << num_mines << endl;

  size = 7;
  num_mines = 2;

  int *cells_arr = new int[size];
  // I do not want to use other libraries  that can do this just in case of a grade scope error. 
  for (int i = 0; i < size; ++i){
  cells_arr[i] = 0;
  }

  // cout << "creating mines..." << endl;
  int mines = 0;
  while (mines < num_mines){
    // srand((unsigned int)time(NULL)); // better rands by seeding // Just kidding gradescope freaks out over this
    int i = rand() % (size);
    // cout << i << endl;
    if (cells_arr[i] != 1){
      cells_arr[i] = 1;
      mines++;
    }
  }

  bool *checked_arr = new bool[size];
  for (int i = 0; i < size; ++i){
  checked_arr[i] = false;
  }

  cells = cells_arr;
  checked = checked_arr;

  // cout << "Saving the a Field with a size of " << size << " And mines of " << num_mines << endl;
  // cout << "Created Default Field" << endl;
}



Field::Field(int _size, int _num_mines){

  size = (_size <= 3) ? 7 : _size;
  num_mines = (_num_mines < 2) ? 2 : _num_mines;
  num_mines = (num_mines >= size) ? size / 3 : num_mines;

  int *cells_arr = new int[size];
  // I do not want to use other libraries  that can do this just in case of a grade scope error. 
  for (int i = 0; i < size; ++i){
  cells_arr[i] = 0;
  }

  // cout << "creating mines..." << endl;
  int mines = 0;
  while (mines < num_mines){
    // srand((unsigned int)time(NULL)); // better rands by seeding
    int i = rand() % (size);
    // cout << i << endl;
    if (cells_arr[i] != 1){
      cells_arr[i] = 1;
      mines++;
    }
  }

  bool *checked_arr = new bool[size];
  for (int i = 0; i < size; ++i){
  checked_arr[i] = false;
  }

  cells = cells_arr;
  checked = checked_arr;

  // cout << "Saving the a Field with a size of " << size << " And mines of " << num_mines << endl;
}

Field::~Field(){
  delete [] cells;
  int  *cells = NULL;
  delete [] checked;
  int *checked = NULL;

}

//Since get_labels is not a must-provided
//functionality for Field class,
//it is not a method in Field class.
//Hence it does not have Field:: in front of its name.
//Function get_labels is called by
//to_string method of Field class.
string get_labels(int size) {
 string str;
 for (int i = 0; i < size; i++) {
 str += " ";
 if (i < 10)
 str += " " + std::to_string(i);
 else str += to_string(i);
 str += " ";
 }
 str += "\n";
 return str;
}
//Since get_separate_line is not a must-provided
//functionality for Field class,
//it is not a method in Field class.
//Hence it does not have Field:: in front of its name.
//Function get_separate_line is called by
//to_string method of Field class.
string get_separate_line(int size) {
 string str = "+";
 for (int i = 0; i < size; i++)
 str += "-----+";
 str += "\n";
 return str;
}
string Field::to_string() const {
 string str = get_labels(size);
 str += get_separate_line(size);
 str += "|";
 for (int i = 0; i < size; i++) {
//  if (cells[i] == 0)
//  {
//  if (checked[i] == true)
//  str += " " + std::to_string(neighbor_mines(i)) +
//  " |";
//  else str += " |";
//  }
//  else //must have a mine
//  str += " |";
 //The above if-else can be simplified.
 //Idea: if a cell has no mine and is checked,
 //display its neighboring information,
 //otherwise, that is,
 //a cell has a mine or
 //it does not have a mine but is not checked yet,
 //do not display anything in that cell.
 //The code is as follows.
 if (cells[i] == 0 &&
 checked[i] == true)
 str += " " + std::to_string(neighbor_mines(i)) +
 " |";
 else str += " |";
 }
 str += "\n";
 str += get_separate_line(size);
 return str;
}

// to_string(): returns a string represening a tabular format of cells with labels. If a cell
// does not have a mine and is checked, then display the number of its neighbors,
// otherwise, that is, display an empty cell. This func=on is provided.

//    0     1     2     3     4     5     6
// +-----+-----+-----+-----+-----+-----+-----+
// |  1  |  *  |  1  |  1  |  *  |  1  |  0  |
// +-----+-----+-----+-----+-----+-----+-----+

// string Field::to_string() const{
//   string fakeGui = "";
//   string firstLine = "";
//   string secondline = "+";
//   string thridline = "|";


//   for (int i = 0; i < size; i++){
//     firstLine += "    ";
//     firstLine += std::to_string(i);
//     firstLine += " ";

//     secondline += "-----+";

//     thridline += "  ";
//     string blankOrChecked = " ";
//     if (is_checked(i)){
//       int isBombOrCountInt = neighbor_mines(i);
//       // Warning Ternary operator might confuse students. 
//       blankOrChecked =  (isBombOrCountInt == -1) ? "*" : std::to_string(isBombOrCountInt);
//     };
//     thridline += blankOrChecked; 
//     thridline += "  |";
    
//   }

//   fakeGui = firstLine + "\n " + secondline + "\n " + thridline +  "\n " + secondline;
//   return fakeGui;
// }

string Field::answer_string() const{
  string fakeGui = "";
  string firstLine = "";
  string secondline = "+";
  string thridline = "|";

  for (int i = 0; i < size; i++){
    firstLine += "    ";
    firstLine += std::to_string(i);
    firstLine += " ";

    secondline += "-----+";

    thridline += "  ";
    int isBombOrCountInt = neighbor_mines(i);
    // Warning Ternary operator might confuse students. 
    string bombOrCountStr = ( isBombOrCountInt == -1) ? "*" : std::to_string(isBombOrCountInt);
    thridline += bombOrCountStr; 
    thridline += "  |";
    
  }

  fakeGui = firstLine + "\n " + secondline + "\n " + thridline +  "\n " + secondline;
  return fakeGui;
}

string Field::empty_layout_string() const {
  string fakeGui = "";
  string firstLine = "";
  string secondline = "+";
  string thridline = "|";


  for (int i = 0; i < size; i++){
    firstLine += "    ";
    firstLine += std::to_string(i);
    firstLine += " ";

    secondline += "-----+";

    thridline += "   ";
    thridline += "  |";
    
  }

  fakeGui = firstLine + "\n " + secondline + "\n " + thridline +  "\n " + secondline;
  return fakeGui;
}

int Field::get_size() const{
  return size;
}

int Field::get_num_mines() const{
  return num_mines;
}

int Field::neighbor_mines(int index) const {

  if (has_mine(index)){
    return -1;
  }

  int count = 0;
  if (index == 0){
    if (has_mine(1)){ // or idx - 1
      count++;
    }
  } else if (index == (size - 1)){
    if (has_mine(index - 1)){
      count++;
    }
  } else {
    if (has_mine(index + 1)){
      count++;
    }
    if (has_mine(index - 1)){
      count++;
    }
  }
  return count;
};

void Field::mark_checked(int index){
  if ((0 <= index) && (index < size)){
    checked[index] = true;
  }
}

bool Field::is_checked(int index) const {
  // if (checked[index] == true){
  //   return true;
  // } else {
  //   return false;
  // }
  return (checked[index] == true) ? true : false;
} 

bool Field::has_mine(int index) const {
  return (cells[index] == 1) ? true : false;
}


// I use this function to check my work from Game.hpp
// Function to print an array, this is code I will use on a lot of problems. 
// void Field::printArray(){
//   cout << "Printing cells" << endl;
//   cout << "of size " << size << ", " <<"And number of mines of " << num_mines << endl;
//   int i;
//   for (i = 0; i < size; i++) {
//       cout << cells[i] << " ";
//   }
//   cout << endl;
// }


#endif