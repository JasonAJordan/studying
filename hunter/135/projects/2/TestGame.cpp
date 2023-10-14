#include <iostream>
#include "Field.hpp"
#include "Field.cpp"
#include "Game.hpp"
#include "Game.cpp"
using namespace std;


int main()
{

 //call default constructor using
  Game minesweeper;
  // Game minesweeper(9, 3);
  minesweeper.play();

 return 0;
}

// List of annoyances
// 1. is   // std::string neighbor() const; needed? 
// 2. where is to_string()? This function is provided. but where is it?
// 3. No example of game over path. 

