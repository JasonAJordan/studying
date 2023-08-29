// 5. Implement the following function description:
// int countLetter ( char a[], int size, char letter) ;
/*
countLetter(a, s, ch) returns the number of occurrences of
character ch among the first s characters in the string a,
ignoring case. In other words, ic ch is 'a', then 'A' and 'a'
are each counted as matching.
*/


#include <iostream>

using namespace std;

int countLetter ( char a[], int size, char letter){
  int count = 0;
  for (int i = 0; i < size ; i++){
    if (toupper(a[i]) == toupper(letter)){
      count++;
    }
  }
  return count;
}

// Driver program
int main()
{ 
  char a[2] = {'a', 'b'};
  int s = 2;
  char ch = 'a';
  int count = countLetter(a, s, ch);
  cout << count; 
  return 0;
}
