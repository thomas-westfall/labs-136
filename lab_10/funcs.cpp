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


void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

string printTimes(Time time){
  string ans = to_string(time.h) + ":" + to_string(time.m);
  return ans;
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
  int leftoverh = (time.m + minutes) / 60;
  int leftoverm = (time.m + minutes) % 60;
  Time ans;
  ans.h = time.h + hours + leftoverh;
  ans.m = leftoverm;
  return ans;
  
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

string printMovies(Movie mv){
    string g;
	string ans;
	
       switch (mv.genre) {
           case ACTION   : g = "ACTION"; break;
           case COMEDY   : g = "COMEDY"; break;
           case DRAMA    : g = "DRAMA";  break;
           case ROMANCE  : g = "ROMANCE"; break;
           case THRILLER : g = "THRILLER"; break;
       }
       ans = mv.title + " " + g + " (" + to_string(mv.duration) + " min)";
	   return ans;
}

string TimeSlotString(TimeSlot ts){
	string ans;
	ans = printMovies(ts.movie) + " [starts at " + printTimes(ts.startTime) + ", ends by " + printTimes(addMinutes(ts.startTime, ts.movie.duration)) + "]";
	return ans;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
	TimeSlot ans;
	Time ansstart = addMinutes(ts.startTime, ts.movie.duration);
	ans.movie = nextMovie;
	ans.startTime = ansstart;
  return ans;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
	int startone = minutesSinceMidnight(ts1.startTime);
	int starttwo = minutesSinceMidnight(ts2.startTime);
	if(((startone + ts1.movie.duration) > starttwo) && (startone < starttwo))
		return true;
	if(((starttwo + ts2.movie.duration) > startone) && (starttwo < startone))
		return true;
  return false;
}
