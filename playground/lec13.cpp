// testing 
#include <stdio.h>
#include <iostream>
using namespace std;

// int main()
// {
//   int num;
//   do
//   {
//   cout << "Enter size: ";
//   cin >> num;
//   } while ( num % 2 != 0);

//   cout << "You entered: " << num << ".\n";
  
//   return 0;
// }


int main()
{
  string password = "";

  while (password.length() <= 8 ){
    cout << ("Enter password: ");
    cin >> password;

  }
  cout << password;  
  return 0;
}

