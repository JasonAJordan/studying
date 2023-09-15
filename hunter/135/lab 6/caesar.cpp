/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6b

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);

$ ./caesar

Enter plaintext: Hello, World!
Enter shift    : 10
Ciphertext     : Rovvy, Gybvn!

*/

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift){
  // return c + rshift;
  char temp = c;

  if( 65 <= int(temp) && int(temp) <= 90) { // uppercases
    temp += rshift;
    // cout << " " << temp << int(temp);
    if(int(temp) > 90) {
      temp -= 26;
    }

  } else if (97 <= int(temp) && int(temp) <= 122) { // lowercases
    // cout << " " << temp << " "<< int(temp) << endl;
    // cout << " " << rshift << " "<< int(temp) + 8 << endl;
    if (int(temp) + rshift > 122){
      temp = temp - 26 + rshift;
    } else {
      temp += rshift; 
    }
  } 

  return temp;
}

string encryptCaesar(string plaintext, int rshift){
  string returnString = "";

  for (int i = 0; i < plaintext.length(); i++){
    returnString += shiftChar(plaintext[i], rshift);
  }
  return returnString;
}

int main(){

  string inputString;
  int shift;

  cout <<  "Enter plaintext: " << endl;
  getline(cin, inputString);

  cout << "Enter shift    :" << endl;
  cin >> shift;

  cout << encryptCaesar(inputString, shift);

  // // cout << shiftChar('w',7);
  // cout << shiftChar('a',5);
  // cout << shiftChar('z',8);
  return 0;
}
