#include <iostream>
// #include "Field.hpp"
// #include "Field.cpp"
#include "Game.hpp"
//#include "Game.cpp"
using namespace std;


int main()
{

 //call default constructor using
  Game minesweeper;
  // Game minesweeper(9, 3);
  minesweeper.play();

 return 0;
}
// g++ TestGame.cpp Field.cpp Game.cpp
// ./a.out   


//Round 1: Please choose a cell (the first starts from 0):    0     1     2     3     4     5     6  
//Round 1: Please choose a cell (the first starts from 0):    0     1     2     3     4     5     6  

//Round 4: Please choose a cell (the first starts from 0): Mine explodes! Game ends.
//Round 4: Please choose a cell (the first starts from 0): Mine explodes! Game ends.