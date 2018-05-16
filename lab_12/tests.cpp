/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 12
Recursion
*/

#include "funcs.h"
#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;


TEST_CASE("Testing Task B: sumRange"){
  CHECK(sumRange(1,3) == 6);
  CHECK(sumRange(-2,10) == 52);

}


TEST_CASE("Testing Task C: sumArray"){

 int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
 
    int sum2 = sumArray(arr, 5); // Add up first five elements
 
 CHECK(sum1 == 43);
 CHECK(sum2 == 34);


}


TEST_CASE("Testing Task D: isAlphanumeric"){
  CHECK(isAlphanumeric("ABCD") == true);
  CHECK(isAlphanumeric("Abcd1234xyz") == true);
  CHECK(isAlphanumeric("") == true);
  CHECK(isAlphanumeric("KLMN 8-7-6") == false);
	
 

}

TEST_CASE("Testing Task E: nestedParens"){

  CHECK(nestedParens("((()))") == true);
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("") == true);

  CHECK(nestedParens("(((") == false);
  CHECK(nestedParens("(()") == false);
  CHECK(nestedParens(")(") == false);
  CHECK(nestedParens("a(b)c") == false);
}

int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
TEST_CASE("Testing Task F: divisible"){
  CHECK(divisible(prices, 9) == true);

}
