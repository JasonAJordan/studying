/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6C

$ ./vigenere

Enter plaintext: Hello, World!
Enter keyword  : cake
Ciphertext     : Jevpq, Wyvnd!

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

// very simliar to encryptCaesar but rshift would be based on the keyword at i
// and we need to keep in mind of non alp chars
string encryptVigenere(string plaintext, string keyword){
  string returnString = "";
  int nonAphCounter = 0;
  for (int i = 0; i < plaintext.length(); i++){ // keeps track of all " ", ",", "]", etcs so the i count doesn't shift over. 
    int j = (i - nonAphCounter ) % keyword.length() ; // very important so we can keep the encryption place. 

    // cout << plaintext[i] << " " << int(plaintext[i]) << keyword[j] << " " <<  int(keyword[j]) << endl; // for my own testing

    if (plaintext[i] < 65  || 122 < plaintext[i] ){
      nonAphCounter++;
      returnString += plaintext[i];
      continue;
    } else {

    returnString += shiftChar(plaintext[i], int(keyword[j]) - 97); // needs -97 to only have the shift value intead of the char value. 
    // cout << returnString << endl; 
    }

  }
  return returnString;
}


int main(){

  string inputString;
  // int shift;
  string shift2;

  cout <<  "Enter plaintext: " << endl;
  getline(cin, inputString);

  cout << "Enter keyword  :" << endl;
  getline(cin, shift2);

  // cout << encryptVigenere(inputString, shift2);
  // cout << encryptVigenere("ABCDEFGHIJKLMNOPQRSTUVWXYZ","tomato");

  return 0;
}
