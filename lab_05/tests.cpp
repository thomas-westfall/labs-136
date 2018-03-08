/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 3
Ashokan Reservoir data manipulation 
*/

#include "funcs.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <limits>
#include <cstddef>
#include <string>
#include <iomanip>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;



TEST_CASE("Testing Task A: isDivisibleBy"){
  CHECK(isDivisibleBy(10,5) == true);
  CHECK(isDivisibleBy(35,17) == false);
 

}

TEST_CASE("Testing Task B: isPrime"){
  CHECK(isPrime(2) == true);
  CHECK(isPrime(6) == false);

}

TEST_CASE("Testing Task C: nextPrime"){
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(18) == 19);
 

}

TEST_CASE("Testing Task D: countPrimes"){
  CHECK(countPrimes(1,2) == 2);
  CHECK(countPrimes(33,34) == 0);
 

}

TEST_CASE("Testing Task E: isTwinPrime"){
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(18) == false);
 

}

TEST_CASE("Testing Task F: nextTwinPrime"){
  CHECK(nextTwinPrime(18) == 19);
  CHECK(nextTwinPrime(19) == 29);
 

}

TEST_CASE("Testing Task G: largestTwinPrime"){
  CHECK(largestTwinPrime(5,18) == 17);
  CHECK(largestTwinPrime(1,31) == 31);
 

}
