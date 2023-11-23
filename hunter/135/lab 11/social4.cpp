/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 11D



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

// Part D
struct Post{
  string username;
  string message;
};


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

    // Part C
    bool following[MAX_USERS][MAX_USERS];  // friendship matrix:
    // following[id1][id2] == true when id1 is following id2

    // Part D
    static const int MAX_POSTS = 100;         // new
    int numPosts = 0;                         // new
    Post posts[MAX_POSTS];                    // new


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

    // Part D
    // Add a new post
    bool writePost(string usrn, string msg);
    // Print user's "timeline"
    bool printTimeline(string usrn);

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

bool Network::writePost(string usrn, string msg){
  Post post;
  post.username = usrn;
  post.message = msg;

  posts[numPosts] = post;
  numPosts = numPosts + 1;
  //cout << numPosts << " " << usrn << " " << msg << endl; 
  return true;
};

bool Network::printTimeline(string usrn){
  int id = findID(usrn);
  // cout << "id " << id << endl;

  // Profile profile = profiles[i];
  //bool followingList[20] = { following[id] };
  // following List following[id];

  //int size = sizeof(followingList) / sizeof(bool);
  // cout << size << "asdf" << endl;
  string timelineListNames[20];
  int count = 0;

  for (int i = 0; i < 20; i++ ){
    if (i == id){ // self should show up on timeline
      timelineListNames[count] = profiles[i].getUsername();
      count++;
    }
    if (following[id][i] == true){
        // cout << "ID of "<< i << " ";
        // cout << profiles[i].getUsername() << endl;
        timelineListNames[count] = profiles[i].getUsername();
        count++;
    }
  }

  for(int i = numPosts - 1; i >= 0; i--){
    for (int j = 0; j < count; j++){
      if ( posts[i].username == timelineListNames[j]){
        int tempid = findID(posts[i].username);
        Profile tempProfile = profiles[tempid];
        //Yoshi (@yoshi): 

        cout << tempProfile.getFullName() <<": " << posts[i].message << endl;       
      }
    }

  }
  return true;
};

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
  // cout << usrn1 << " is now going to follow " << usrn2 << " ID " << idx1 << " -> " << idx2 << endl;
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

  // Part D
  Network nw;
  // add three users
  nw.addUser("mario", "Mario"); // id 0
  nw.addUser("luigi", "Luigi"); // id 1
  nw.addUser("yoshi", "Yoshi"); // id 2
   
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  // write some posts
  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;

// Should produce
// ======= Mario's timeline =======
// Mario (@mario): My crazy plans always work!
// Luigi (@luigi): I just hope this crazy plan of yours works!
// Mario (@mario): Hi Luigi!
// Luigi (@luigi): Hey hey!
// Mario (@mario): It's a-me, Mario!

// ======= Yoshi's timeline =======
// Yoshi (@yoshi): Test 5
// Yoshi (@yoshi): Test 4
// Yoshi (@yoshi): Test 3
// Mario (@mario): My crazy plans always work!
// Yoshi (@yoshi): Test 2
// Yoshi (@yoshi): Test 1
// Mario (@mario): Hi Luigi!
// Mario (@mario): It's a-me, Mario!
}


