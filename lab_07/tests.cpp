/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 5
Function Practice
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




TEST_CASE("Testing Task B: encryptCaesar"){
  CHECK(encryptCaesar("Way to Go!", 5)  == "Bfd yt Lt!");

}

TEST_CASE("Testing Task C: encryptVigenere"){
  CHECK(encryptVigenere("Hello World!", "cake") == "filler");
 

}

TEST_CASE("Testing Task D: decryptCaesar"){
  CHECK(countPrimes(1,2) == 2);
  CHECK(countPrimes(33,34) == 0);
 

}

TEST_CASE("Testing Task D2: decryptVigenere"){
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(18) == false);
 

}
