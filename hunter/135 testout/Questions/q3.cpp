// 3. Write a function that, when given a string argument, returns a reversed copy of the string


#include <iostream>
using namespace std;


// reverseString
string reverseString(string s)
{
    string rstring = "";
    for (int i = s.length(); i >= 0; i--){
        rstring += s[i];
    }
    cout << s.length();
    return rstring;
}
 
 
// Driver program
int main()
{ 
    // Function Call
    string rstring = reverseString("aseesdf");
    cout << "Revsersed String: " << rstring;

    return 0;
}
