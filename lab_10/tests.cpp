/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 10
Structs
*/

#include "funcs.h"
#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;



TEST_CASE("Testing Task A: minutesuntil"){
CHECK(minutesSinceMidnight({10,30}) == 630);
CHECK(minutesUntil({10,30},{13,40}) == 190);
 

}

TEST_CASE("Testing Task B: addminutes"){
  CHECK(printTimes(addMinutes({8, 10}, 75)) == "9:25");
  CHECK(printTimes(addMinutes({8, 10}, 1)) == "8:11");

}

Movie movie1 = {"Back to the Future", COMEDY, 116};
Movie movie2 = {"Black Panther", ACTION, 134};

TimeSlot morning = {movie1, {9, 15}};  
TimeSlot daytime = {movie2, {12, 15}}; 
TimeSlot evening = {movie2, {16, 45}}; 

TEST_CASE("Testing Task C: timeslot"){
	CHECK(TimeSlotString(morning) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
	CHECK(TimeSlotString(daytime) == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
 

}

Movie movieaba = {"cool movie", ACTION, 120};
TimeSlot a = {movieaba, {14, 10}};  
TimeSlot b = {movieaba, {16, 10}}; 
TEST_CASE("Testing Task D: scheduleafter"){
	CHECK(TimeSlotString(scheduleAfter(a,movieaba)) == TimeSlotString(b));
}

Movie movie1b = {"arbitrary", COMEDY, 90};
Movie movie2b = {"arbitrarytwo", ACTION, 134};
TimeSlot morningb = {movie1b, {10, 0}};  
TimeSlot daytimeb = {movie2b, {11, 29}}; 

TEST_CASE("Testing Task E: timeoverlap"){
	CHECK(timeOverlap(morning,daytime) == false);
	CHECK(timeOverlap(morningb,daytimeb) == true);
 

}
