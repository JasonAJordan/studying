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
  // Field areaDefault; // default values 7 , 2
  // area = areaDefault;
  cout << "Created Default game" << endl;
}

Game::Game(int size, int num_mines){
  Field area(size, num_mines);

}




void Game::play(){ 
  cout << "testing game.play" << endl;

  // This is to check my work
  // cout << "Running .get_size() & .get_num_mines()" << endl;
  // cout << area.get_size() <<  " " << area.get_num_mines() << endl;
  area.printArray();


  cout << endl << area.empty() << endl;
  cout << endl;
  cout << endl << area.to_string() << endl;
  cout << endl;
  cout << endl << area.answer_string() << endl;
}

#endif