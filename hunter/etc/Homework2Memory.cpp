#include <iostream>
using namespace std;

int main() {
  struct foo_t {
    int x[100];
    int var1;
    int y[10];
    } foo;
  int var2;
  long i;
  int *p, *q;
  short int *s;
  long int *l;
  struct foo_t bar[50];

  for (i=0; i<100; i++) foo.x[i]=300+i;
  for (i=0; i<10; i++)  foo.y[i]=800+i;
  foo.var1 = 440;

  // MOD below
  // Question 1
  cout << sizeof(*s) << " Short" <<"\n";
  cout << sizeof(*p) << " Reg" << "\n";
  cout << sizeof(*l) << " Long" <<"\n";

  // Question 2
  cout << sizeof(s) << " Short Pointer" <<"\n";
  cout << sizeof(p) << " Reg Pointer" << "\n";
  cout << sizeof(l) << " Long Pointer" <<"\n";

  q = (int *) &foo;    cout << q << "\n";
  p=&(foo.x[5]);       cout << *p << "\n";

  // Question 3
  cout << "\nAddress\t\t" << "Value\t\t" << "Name\n";
  cout << &var2 << "\t" << var2 <<"\t\t" << "var2\n";
  cout << &i << "\t" << i <<"\t\t" << "i\n";
  cout << &q << "\t" << q <<"\t" << "q\n";
  cout << &p << "\t" << p <<"\t" << "p\n";
  cout << &s << "\t" << s <<"\t\t" << "s\n";
  cout << &l << "\t" << l <<"\t\t" << "s\n";
  cout << &foo.var1 << "\t" << foo.var1 <<"\t\t" << "foo.var1\n";
  cout << &foo.x[0] << "\t" << foo.x[0] <<"\t\t" << "foo.x[0]\n";
  cout << &foo.x[49] << "\t" << foo.x[49] <<"\t\t" << "foo.x[k], k= 49\n";
  cout << &foo.x[99] << "\t" << foo.x[99] <<"\t\t" << "foo.x[99]\n";
  cout << &foo.y[0] << "\t" << foo.y[0] <<"\t\t" << "foo.y[0]\n";
  cout << &foo.y[4] << "\t" << foo.y[4] <<"\t\t" << "foo.y[k], k = 4\n";
  cout << &foo.y[9] << "\t" << foo.y[9] <<"\t\t" << "foo.y[9]\n";
  cout << &bar[0] << "\t" << "NA" <<"\t\t" << "bar[0]\n";
  cout << &bar[49] << "\t" << "NA" <<"\t\t" << "bar[49]\n\n";

  // POINT 1


  q = (int *) &var2;   cout << q << "\n";
  q = p+16;            cout << *q << "\n"; 
  i = ((long) p) + 16; 
  q = (int *) i;       cout << *q << "\n"; 
  s = (short *) i;     cout << *s << "\n"; 
  l = (long *) i;      cout << *l << "\n"; 
  q = p+95;            cout << *q << "\n";  

  i = ((long) p) + 17; 
  q = (int *) i;       cout << *q << "\n";  // EXPLAIN
  /* Question 4
    As q is set to (int *) &foo, and p is set as a long i = ((long) p) + 17. The conversion of long to int throws the value off and needs to be divisible by 4.
    17 is not divisible by 4 bytes. Which means the pointer can't access 305 (16) or 306 (20) giving us another value.

    EX 309 in binary is 1-00110101
    but in out code the bytes are read as 00110101 00000001 00000000 00000000 
    so when we move up by a value that isn't 4 we would read 00000001 00000000 00000000 001101100
    001101100 coming from part of the 310 mememory value. 
  */

  // Question 5
  // Integers and pointers additions is slightly diffrent from each other. Integer addition works like standard addition while pointer addtion
  // will have the value change by a multiple of 4 bytes (or 8 size of int). For an example if a pointer, int* p; has an address of 1000, the smallest 
  // increment, p++, would be 4 making the new value 1004.  

  // Question 6
  // First 100 valuves pasted p is 300 -> 399 then 440, then  800 -> 809
  cout << "Q5\n";
  q = p + 101;     cout << *q << "\n";
  q = (int *) (((long) p) + 101*sizeof(int));  cout << *q << "\n";

  // Question 7
  // 
  p = (int *) bar;
  *(p +  8 * (100 + 1 + 10) + 100) = 947; cout << bar[8].var1 << "\n"; 

  // Question 8
  // 
  int test1 = 69;
  int test2 = 420;
  cout << &test1 << " " << &test2 <<" \n";
  // The values go up in memory. You can see this with any of the variables created within the program. 0x62a680 > 0x62a67c
}