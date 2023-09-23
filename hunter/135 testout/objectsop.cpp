#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  
using namespace std;

class Bug {
  public:
  int position = 0;

  void upPublic( int);
  private:
  int get_position(void);
  void reset(void);
  void up(void);
  
};

int Bug::get_position()  {
  return position;
}

void Bug::reset(){ 
  position = 0;
}

void Bug::up(){ 
  position = position + 10;
}

void Bug::upPublic(int amount){ 
  position = position + 10 * amount;
  if (position > 100){
    cout << "Bug went higher than 100, reseting distance!" << endl;
    this->reset();
  }
}

main (){
  Bug bugtest; 
  bugtest.position = 0;

  cout << "Bug Climing" << endl;
  cout << bugtest.position << endl; 
  bugtest.upPublic( 13);
  cout << bugtest.position << endl; 
}

// bug climbs 10 cm, and @ 100,
 // resets back to position 0