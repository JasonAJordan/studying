// 13. What is the output of the following program fragment?

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

//strncpy
// strtok

int main(){
  char * b = new char[15];
  char * c ;
  strncpy( b , "May 26 , 2010", 20);
  c = strtok( b , " , " ) ;
  cout << b << c << endl;

  // while ( c != NULL)
  // {
  // cout << c << " \n" ;
  // strtok ( NULL, " , " ) ;
  // } 
}
// Nothing programing is strong, strncpy need another argument 

