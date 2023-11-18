#include <iostream>
#include "Board.cpp"
using namespace std;

int main()
{
   Board game; //create a default Board object game
    game.print(); //test print method of game

    Board game2(4, 4); //create a Board object with 3 rows and 3 columns.
    // game.start();
    game2.print();
    
    return 0;
}