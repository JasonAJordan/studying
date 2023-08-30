#include <iostream>
using namespace std;
#include <vector>

void printv(vector<int> v)
{
    int i;
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        
    }
    cout << endl;
}


int main(){

  vector<int> list = {1,2,3};

  cout << list.size() << endl;
  list.push_back(7);
  list.push_back(10);
  cout << list.size()<< endl;
  list.pop_back();
  cout << list.size()<< endl;
  printv(list);

  return 0;
}


