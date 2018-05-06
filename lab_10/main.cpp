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

int main() {

	cout<<"Task A: minutesSinceMidnight and minutesUntil"<<endl;
	cout<<"minutesSinceMidnight({10,30}) == " << minutesSinceMidnight({10,30})<<endl;
	cout<<"minutesUntil({10,30},{13,40}) == " <<minutesUntil({10,30},{13,40})<<endl;
 

	

	cout<<"Task B: addminutes"<<endl;
	  cout<<"Adding 75 minutes to 8:10 == " << printTimes(addMinutes({8, 10}, 75))<<endl;


	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};

	TimeSlot morning = {movie1, {9, 15}};  
	TimeSlot daytime = {movie2, {12, 15}}; 
	TimeSlot evening = {movie2, {16, 45}}; 

	cout<<"Task C: timeslot"<<endl;
		cout<<"Morning timeslot: " << TimeSlotString(morning)<<endl;
		cout<<"Daytime timeslot: " << TimeSlotString(daytime)<<endl;
 

	

	Movie movieaba = {"cool movie", ACTION, 120};
	TimeSlot a = {movieaba, {14, 10}};  
	cout<<"Task D: scheduleafter"<<endl;
	cout<<"Scheduling a movie at 16:10 since the first movie starts at 14:10 and is 120 mins long"<<endl;
		cout<<TimeSlotString(scheduleAfter(a,movieaba))<<endl;
	

	Movie movie1b = {"arbitrary", COMEDY, 90};
	Movie movie2b = {"arbitrarytwo", ACTION, 134};
	TimeSlot morningb = {movie1b, {10, 0}};  
	TimeSlot daytimeb = {movie2b, {11, 29}}; 

	cout<<"Task E: timeoverlap"<<endl;
		cout<< "Check if 116 min movie at 9:15 overlaps with movie at 12:15: "<<timeOverlap(morning,daytime)<<endl;
		cout<< "Check if 90 min movie at 10:00 overlaps with movie at 11:29: "<<timeOverlap(morningb,daytimeb)<<endl;
 

	
  return 0;
}

