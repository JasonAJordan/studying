// 12. Show the values of the array in the following program (1) before it enters the loop, (2) after it leaves
// the loop, and just before the program terminates.


#include<iostream>
using namespace std;
int main ( )
{
  int values[ 5 ] = { 3 };
    cout << values[0]<< endl;
  for ( int i = 1 ; i < 5 ; i++)
  {
    values [ i ] = i ;
  }
  cout << values[0] << " " <<  values[1] << endl;
  values[0] = *( values + 1  ) + *( values   + 4) ;
  cout << values[0] << " " <<  values[1] << endl;
  return 0 ;
}

// Before loop Values [3, 0, 0, 0, 0]
// after loop Values [3, 1, 2, 3, 4]
// end  [5, 1, 2, 3, 4]