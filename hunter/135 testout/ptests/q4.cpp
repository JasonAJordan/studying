#include<iostream>
#include <vector>
using namespace std;

// //In this problem, you will have to implement the given class, as well as test it with a main function. 
//This class represents a simple task manager, that can "open" and "close" files by updating a list

class TaskManager {
public:
    //default constructor: sets all list elements to empty string
    TaskManager();
    //paramterized constructor: sets list to given vector 
    TaskManager(const vector<string>& tasks);
    //adds the app to the list
    void openApp(string app);
    //will remove the app with the given name from the list
    void forceQuit(string app);
    //gets the number of apps currently in list
    int numberOfApps();
    //prints all apps in list 
    void printList();
private:
    vector<string> list; 
};

//part A: implement the public interface
//all implementations are basic/self-explanatory besides forceQuit
//forceQuit: this function should first check if the list is empty
//if the list is empty, the function should alert the user and return
//next, you need to find the index of the given app in the list
//you should initialize this index variable to -1 in case the app is not found in the list
//search the list for the given app name, and if it is found, store its index
//if the app was not found in the list, the function should alert the user and return
//assuming we have a valid index for our list, we want to remove the element at that position
//while maintaining the order of the list. 