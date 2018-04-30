/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 10
Structs
*/



#include <iostream>
#include "funcs.h"
#include "labstructs.h"
using namespace std;

string printTime(Time time){
  string ans = time.h + ":" + time.m;
  return ans;
  // cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time){
  int ans = 0;
  ans = time.h * 60 + time.m;
  return ans;
}

int minutesUntil(Time earlier, Time later){
  int laterr = minutesSinceMidnight(later);
  int earlierr = minutesSinceMidnight(earlier);
  return laterr - earlierr;
}

Time addMinutes(Time time, int min){
  int hours = min / 60;
  int minutes = min % 60;
  Time ans;
  ans.h = time.h + hours;
  ans.m = time.m + minutes;
  return ans;
  
}

void printMovie(Movie mv){
}

string TimeSlotString(TimeSlot ts){
  return "";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
  return ts;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
  return false;
}
