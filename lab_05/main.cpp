/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 5
Function Practice
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "funcs.h"
#include <cstddef>
using namespace std;

int main() {

  cout << "Task A test (isDivisibleBy(10,5)): " << isDivisibleBy(10,5) <<endl;
  cout << "Task B test (isPrime(2)): " << isPrime(2) <<endl;
  cout << "Task C test (nextPrime(14)): " << nextPrime(14) <<endl;
  cout << "Task D test (countPrimes(1,2)): " << countPrimes(1,2) <<endl;
  cout << "Task E test (isTwinPrime(17)): " << isTwinPrime(17) <<endl;
  cout << "Task F test (nextTwinPrime(18)): " << nextTwinPrime(18) <<endl;
  cout << "Task G test (largestTwinPrime(5,18)): " << largestTwinPrime(5,18) <<endl;

  return 0;

}

