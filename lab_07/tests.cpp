/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 7
Cipher
*/

#include "funcs.h"
#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;




TEST_CASE("Testing Task B: encryptCaesar"){
  CHECK(encryptCaesar("Way to Go!", 5)  == "Bfd yt Lt!");

}

TEST_CASE("Testing Task C: encryptVigenere"){
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
 

}

TEST_CASE("Testing Task D: decryptCaesar"){
  CHECK(decryptCaesar("Rovvy, Gybvn!",10) == "Hello, World!");


}

TEST_CASE("Testing Task D2: decryptVigenere"){
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}
