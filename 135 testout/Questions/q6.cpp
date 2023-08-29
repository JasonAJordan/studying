//  6. Given the following class prototype, write the definitions of the two member functions and the constructor:
// class cStudent
/*
{
public:
cStudent ( char fn[], char ln[], int id = 0);
void mGetName (char name[], int MaxLength);
// After calling mGetName, name will contain the first name
// followed by the last name with a single space character
// in between, provided that MaxLength is large enough;
// otherwise it is empty.
void mChangeId (int i );
// replaces the old ID with the new one
private:
char firstName[10];
char lastName[10];
int ID;
}
*/ 
#include <iostream>
#include <string.h> // strlen
#include<cstring>

using namespace std;

class cStudent{
  public:
  cStudent ( char fn[], char ln[], int s[], int id = 0)
    { // Constructor with parameters
      strcpy(firstName, fn);
      strcpy(lastName, ln);
      for (int i =0; i < 4; i++){
        slots[i] = s[i];
      }
      ID = id;
    };
  void mGetName (char name[], int MaxLength);
  void mChangeId (int i );

  private:
  char firstName[10];
  char lastName[10];
  int slots[4];
  int ID;
};



void cStudent::mGetName(char name[], int MaxLength){
  if (strlen(name) < MaxLength){
    cout << firstName << " " << lastName;
  }
}

void cStudent::mChangeId(int i){
  ID = i;
}


// Driver program
int main()
{ 

  char firstname_[10] = {'a', 'b'};
  char lastname_[10] = {'c'};
  int slots_[4] = {1,2,3,4};

  cStudent cStudenttest(firstname_, lastname_,slots_);
  cStudenttest.mGetName(firstname_, 3);
  return 0;
}

