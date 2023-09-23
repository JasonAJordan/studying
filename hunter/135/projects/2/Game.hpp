//#pragma once
#ifndef GAME_H
#define GAME_H
#include "Field.hpp"

#include <iostream>
using namespace std;

class Game {

 private:
  Field area;

 public:
  Game();
  Game(int size, int num_mines);
  // int input() const;
  void play();

};


Game::Game(){
  Field area; // default values 7 , 2
  cout << "Printing size & num of mines" << endl;
  cout << area.get_size() <<  " " << area.get_num_mines() << endl;
}

Game::Game(int size, int num_mines){
  Field area(size, num_mines);
  area = area;
}




void Game::play(){ 
  cout << "testing game.play" << endl;

  // This is to check my work
  // cout << area.get_size() <<  " " << area.get_num_mines() << endl;
  // area.printArray();


}

#endif