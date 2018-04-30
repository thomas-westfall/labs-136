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
  CHECK(printTime(addMinutes({8, 10}, 75)) == "9:25");
  CHECK(printTime(addMinutes({8, 10}, 1)) == "8:11");

}

TEST_CASE("Testing Task C: timeslot"){
//CHECK(TimeSlotString(ts) == "");
//CHECK(TimeSlotString(ts) == "");
 

}

TEST_CASE("Testing Task D: scheduleafter"){
//CHECK(scheduleAfter(ts,nextMovie) == ts);
//  CHECK(scheduleAfter(ts,nextmovie) == ts);
 

}

TEST_CASE("Testing Task E: timeoverlap"){
//CHECK(timeOverlap(ts1,ts2) == true);
//  CHECK(timeOverlap(ts1,ts2) == false);
 

}
