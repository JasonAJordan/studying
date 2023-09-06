/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.3


Simulate a circuit for controlling a hallway light that has switches at both ends of 
the hallway. Each switch can be up or down, and the light can be on or off. Toggling 
either switch turns the lamp on or off. Provide member functions
    int get_first_switch_state() // 0 for down, 1 for up
    int get_second_switch_state()
    int get_lamp_state() // 0 for off, 1 for on
    void toggle_first_switch()
    void toggle_second_switch()


*/

#include <iostream>
using namespace std;

class Circuit {
  public:
  int get_first_switch_state(void);
  int get_second_switch_state(void);
  int get_lamp_state(void);
  void toggle_first_switch(void);
  void toggle_second_switch(void);

  int lamp_state;
  int switch_one_state;
  int switch_two_state;

  private:

  // int lamp_state;
  // int switch_one_state;
  // int switch_two_state;

};

int Circuit::get_first_switch_state() {
  return switch_one_state;
}

int Circuit::get_second_switch_state() {
  return switch_one_state;
}

int Circuit::get_lamp_state() {
  return lamp_state;
}

void Circuit::toggle_first_switch() {
  if (switch_one_state == 1){
    switch_one_state = 0;
  } else {
    switch_one_state = 1;
  }
  lamp_state = (lamp_state == 1) ? 0 : 1;
}

void Circuit::toggle_second_switch() {
  if (switch_two_state == 1){
    switch_two_state = 0;
  } else {
    switch_one_state = 1;
  }
  lamp_state = (lamp_state == 1) ? 0 : 1;
}





int main(){
  Circuit circuitTest; 
  circuitTest.lamp_state = 0;
  circuitTest.switch_one_state = 0;
  circuitTest.switch_two_state = 0;

  circuitTest.toggle_first_switch();
  cout << circuitTest.get_first_switch_state() << endl;
  cout << circuitTest.get_lamp_state() << endl;


  return 0;
}
