/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 10A, B

// task A
Create a new program time.cpp. (Copy the class Time declaration in your program, it should be placed before main() function.)

Implement two new functions:

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
...
$ ./time
Enter first time:  10 30
Enter second time: 13 40

These moments of time are X and Y minutes after midnight.
The interval between them is Z minutes.



*/

#include <iostream>

using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
public:
    int h;
    int m;
};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};


// Functions
// Part A

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time){
  return (time.h * 60) + time.m; 
};

int minutesUntil(Time earlier, Time later){
  return ((later.h * 60) + later.m) - ((earlier.h * 60) + earlier.m); 
};

// Part B

Time addMinutes(Time time, int min){
  int m = time.m + min;
  int h = (m / 60); // dividing rounds down, this is to figure out if we need to add hours
  time.m = (m % 60); // only 60 mins in an hour
  time.h = (time.h + h) % 24; // it's a 24 hour clock
  return time;
}


void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

// Part C

// Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
void printTimeSlot(TimeSlot ts){

  printMovie(ts.movie);
  cout << " [stats at ";
  printTime(ts.startTime);
  cout << ", ends by ";
  printTime(addMinutes(ts.startTime, ts.movie.duration));
  cout << "]" << endl;
}

// Part D

// class TimeSlot { 
// public: 
//     Movie movie;     // what movie
//     Time startTime;  // when it starts
// };

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
  Time nextTime = addMinutes(ts.startTime, ts.movie.duration);
  TimeSlot next = {nextMovie, nextTime};
  return next;
}

// Part E

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
  int ts1Start = minutesSinceMidnight(ts1.startTime);
  Time ts1EndTime = addMinutes(ts1.startTime, ts1.movie.duration);
  int ts1End =  minutesSinceMidnight(ts1EndTime);

  int ts2Start = minutesSinceMidnight(ts2.startTime);
  Time ts2EndTime = addMinutes(ts2.startTime, ts2.movie.duration);
  int ts2End =  minutesSinceMidnight(ts2EndTime);

  if (ts1Start == ts2Start) {
    return false;
  } else if (ts1Start < ts2Start){
    return (ts1End <= ts2Start);
  } else {
    return (ts2End <= ts1Start );
  }
  // bool movie2StartsAfter = (ts1Start < ts2Start) && (ts1End <= ts2Start);
  // bool movie1StartsAfter = (ts2Start < ts1Start) && (ts2End <= ts1Start);
  // return (movie2StartsAfter || movie1StartsAfter); 
}


int main() {
  // Part of given code
  // Time now;    // creates a new variable (or object)
  // now.h = 17;  // assigns its hours field
  // now.m = 45;  // assigns its minutes field 

  // Time morningLecture = {8, 10};

  // Time myAlarm;              // make another variable

  // myAlarm = morningLecture;    // copying

  // printTime(morningLecture);   // will print 8:10
  // cout << endl;
  // printTime(myAlarm);   


  // Part A
  // Time a;
  // Time b;
  // cout << "Enter first time: " << endl;
  // cin >> a.h >> a.m;

  // cout << "Enter second time: " << endl;
  // cin >> b.h >> b.m;

  // cout << "These moments of time are X and Y minutes after midnight. " << 
  // minutesSinceMidnight(a) << " " <<   minutesSinceMidnight(b) << endl;

  // cout << "The interval between them is Z minutes. " << minutesUntil(a,b) << endl;
  // // These moments of time are X and Y minutes after midnight.630 820
  // // The interval between them is Z minutes.190
  
  // // Part b
  // Time a;
  // a = {8, 10};
  // a = addMinutes(a, 75);
  // printTime(a);

  // // Part C
  // Movie movie1 = {"Back to the Future", COMEDY, 116};
  // Movie movie2 = {"Black Panther", ACTION, 134};

  // TimeSlot morning = {movie1, {9, 15}};  
  // TimeSlot daytime = {movie2, {12, 15}}; 
  // TimeSlot evening = {movie2, {16, 45}}; 
  // printTimeSlot(morning);
  // printTimeSlot(daytime);
  // printTimeSlot(evening);

  // // Part D
  // // I uncommented code in part C
  // TimeSlot next = scheduleAfter(evening, movie1 );
  // printTimeSlot(next);

  // Part E


  return 0;
}