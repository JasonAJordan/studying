/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 11B



*/

#include <iostream>
#include <cmath> // sqrt()
using namespace std;

class Profile {
  private:
    string username;
    string displayname;
  public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

Profile::Profile(string usrn, string dspn){
  username = usrn;
  displayname = dspn;
}

Profile::Profile(){
  cout << username << endl;
}

string Profile::getUsername() { 
  return username; 
}

string Profile::getFullName() { 
  string full = displayname + " (@" + username + ')';
  return full; 
}

void Profile::setDisplayName(string dspn){
  displayname = dspn;
}

// Part B
class Network {
  private:
    static const int MAX_USERS = 20; // max number of user profiles
    int numUsers;                    // number of registered users
    Profile profiles[MAX_USERS];     // user profiles array:
                                    // mapping integer ID -> Profile

    // Returns user ID (index in the 'profiles' array) by their username
    // (or -1 if username is not found)
    int findID (string usrn);
  public:
    // Constructor, makes an empty network (numUsers = 0)
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);
};

int Network::findID(string usrn){

  for(int i= 0; i < 20 ;i++){
    Profile profile = profiles[i];
    string username = profile.getUsername();
    //cout << username << " at " << i << " comparing for " << usrn << endl; // @
    if ( username == usrn) return i;
  }
  return -1;
}

Network::Network(){
  numUsers = 0;
}

bool Network::addUser(string usrn, string dspn){
  //cout << "Start Add user" << endl; 

  // alphanumeric check iswalnum(ch)
  for (int i = 0; i < usrn.length(); i++){
    if (iswalnum(usrn[i]) == 0){
      // cout << "alphanumeric check failed for " << usrn << endl;
      return false;
    }
  }

  if (findID(usrn) == -1){
    // int userNumber = numUsers;

    if (numUsers == 20){
      // cout << "User count at max" << endl;
      return false;
    } else {
      // cout << " add user creation else for " << usrn << endl; 
      Profile newProfile = Profile(usrn, dspn);
      profiles[numUsers] = newProfile;
      numUsers++;
      return true;
    }

  } 
  // cout << "username " << usrn <<  " is in use" << endl; 
  return false;
  
}

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  // cout << "Running 20" << endl; // COMMENT THIS CODE OUT BEFORE SUBMIT
  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}