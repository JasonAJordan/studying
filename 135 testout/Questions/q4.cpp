// 4. Write a function that will copy the contents of an inputfile stream to an outputfile stream. The
// function cannot assume that either stream is already open. The loop that actually does the copy
// should terminate on end of file. The function prototype should be
// copy(ifstream& fin, ofstream& fout);


#include <iostream>
#include <fstream>
using namespace std;


//  file stream 


void copy(ifstream& fin, ofstream& fout)
{
  fout << fin.rdbuf();
}
 
 
// Driver program
int main()
{ 
    ifstream in_file;
    ofstream out_file;
    in_file.open("filetest.txt");
    out_file.open("filetest2.txt");

    copy(in_file, out_file);

    in_file.close();
    out_file.close();

    return 0;
}
