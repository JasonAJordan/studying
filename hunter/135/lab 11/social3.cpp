/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 11C



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
    // Return username // ??????? All this did was mess up Part C
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
  // cout << username << endl;
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

    // PArt c
    bool following[MAX_USERS][MAX_USERS];  // friendship matrix:
    // following[id1][id2] == true when id1 is following id2

  public:
    // Constructor, makes an empty network (numUsers = 0)
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);

    // Part c
    // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
    // return true if success (if both usernames exist), otherwise return false
    bool follow(string usrn1, string usrn2);

    // Print Dot file (graphical representation of the network)
    void printDot();

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

  // following matrix to set to all false (zero)
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 20; j++){
        following[i][j] = false;
    }
  }

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


bool Network::follow(string usrn1, string usrn2){
  int idx1 = findID(usrn1);
  int idx2 = findID(usrn2);

  if (idx1 == -1 || idx2 == -1){
    return false;
  } else {
    following[idx1][idx2] = true;
    return true;
  }

}

void Network::printDot(){
  cout << "digraph {" << endl;

  for (int i = 0; i < numUsers; i++){
    // cout << "\t\"@" << profiles[i].getUsername() << "\"" <<endl; 
    // This class is so ugh...
    cout << "  " << "\"" << "@" << profiles[i].getUsername() << "\"" <<endl; 
  }
  // cout << endl;

  for (int i =0; i< numUsers; i++){
    for (int j = 0; j < numUsers; j++){

      if (following[i][j] == true ){ 
        // cout << "\t\"@" << profiles[i].getUsername() << "\" -> \'"
        cout << "  " << "\"" << "@" << profiles[i].getUsername() << "\" -> \"@"
        << profiles[j].getUsername() <<  "\"" << endl;
      }
    }
  }
  cout << "}" <<endl;
}

int main() {

  Network nw;
  // add three users

  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");

  // make them follow each other
  nw.follow("mario", "luigi");
  nw.follow("mario", "yoshi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");
  nw.follow("yoshi", "luigi");

  // add a user who does not follow others
  nw.addUser("wario", "Wario");
  
  // add clone users who follow @mario
  for(int i = 2; i < 6; i++) {
      string usrn = "mario" + to_string(i);
      string dspn = "Mario " + to_string(i);
      nw.addUser(usrn, dspn);
      nw.follow(usrn, "mario");
  }
  // additionally, make @mario2 follow @luigi
  nw.follow("mario2", "luigi");

  nw.printDot();
}


