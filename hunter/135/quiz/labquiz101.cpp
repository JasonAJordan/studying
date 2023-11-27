/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 10


*/

#include <iostream>

using namespace std;

class Date {
  public:
    int month;
    int day;
    int year;
};

string formatDate(Date* date){



  string month = to_string(date->month) ;

  if (date->month == 12){
    month = "Dec";
  }else if (date->month == 11){
    month = "Nov";
  }else if (date->month == 10){
    month = "Oct";
  }else if (date->month == 9){
    month = "Sep";
  }else if (date->month == 8){
    month = "Aug";
  }else if (date->month == 7){
    month = "Jul";
  }else if (date->month == 6){
    month = "Jun";
  }else if (date->month == 5){
    month = "May";
  }else if (date->month == 4){
    month = "Apr";
  }else if (date->month == 3){
    month = "Mar";
  }else if (date->month == 2){
    month = "Feb";
  }else if (date->month == 1){
    month = "Jan";
  }else {
  }

  string day = to_string(date->day);
  string year = to_string(date->year);
  string x = month + " " + day + ", " + year;
  return x;
}

// int main(){
//   Date d;
//   d.month = 1;
//   d.day = 2;
//   d.year = 999;
//   Date* p = &d;

//   cout << formatDate(p);


//   return 0;
// }