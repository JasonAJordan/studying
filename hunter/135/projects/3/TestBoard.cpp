#include <iostream>
#include "Board.cpp"
using namespace std;

int main()
{
   Board game; //create a default Board object game
    //game.start();
    game.print(); //test print method of game

    Board game2(3,3);
    game2.print();

    //Board game2(4, 4); //create a Board object with 3 rows and 3 columns.
    // game.start();
    //game2.print();
    // int one = 1;
    // int two = 2;
    // game.selectRandomCell(one, two);
    // bool test = game.noAdjacentSameValue();
    // game.print();


    // game.print();

    
    return 0;
}