//#pragma once
// #ifndef GAME_C
// #define GAME_C
// #include "Field.hpp"
// #include "Field.cpp"
#include "Game.hpp"

#include <iostream>
using namespace std;

// class Game {

//  private:
//   Field area;

//  public:
//   Game();
//   Game(int size, int num_mines);
//   int input() const;
//   void play();

// };


Game::Game():area(){

}

Game::Game(int size, int num_mines):area(size, num_mines){
  //Field area(size, num_mines);

}


int Game::input() const{ 
  bool valid = false;
  int selected = -1;
  int size = area.get_size();

  cout << "Please choose a cell (the first starts from 0): " ;
  cin >> selected; 

  while (!valid){
    bool cond1 = (0 <= selected) && (selected < size);
    bool cond2 = !area.is_checked(selected); // NOT checked
    valid = (cond1 && cond2);

    if (!cond1) {
      cout << "Enter an integer in [0, " << size - 1 << "]: " ;
      cin >> selected;
      continue;
    } else if (!cond2){
      cout << "Cell " << selected <<" is already chosen. Please re-enter:" ;
      cin >> selected;
      continue;
    }
  }

  return selected;

}


void Game::play(){ 
  bool gameOn = true;
  bool gameWon = false;
  
  int selectedCount = 0;
  int size = area.get_size();
  int bombCount = area.get_num_mines();

  cout << area.empty_layout_string() << endl;

  while (gameOn){
    cout << "Round " << selectedCount + 1 << ": "; 
    int idx = input();
    if (area.has_mine(idx)){
      area.mark_checked(idx); //area.set_checked(idx); 
      // cout << endl << area.to_string() << endl;
      // cout << "GameOver" << endl;
      gameOn = !gameOn; // maybe just use break? 
      continue;
    } else {
      // cout << "setting checked" << endl;
      area.mark_checked(idx); //area.set_checked(idx);
      // cout << "setting checked for idx " << idx << "  " << endl
      // << "comes back as " << area.is_checked(idx) << endl;
      selectedCount++;
      if (selectedCount ==  size - bombCount){
        gameOn = false;
        gameWon = true;
      }
    }
    //cout << endl << area.to_string() << endl;
    cout << area.to_string() << endl;
  }
  if (gameWon){
    cout << "Congratulations! Find out all the cells without mines." << endl;
  } else {
    cout << "Mine explodes! Game ends." << endl;
  }
  cout << endl;
  cout << "The answer is " << endl;
  cout << area.answer_string();
}

// #endif