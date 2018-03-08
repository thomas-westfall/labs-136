/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 5

*/

#include "funcs.h"
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <string>
#include <fstream>

using namespace std;

bool isDivisibleBy(int n, int d){
  return(n % d == 0);
    }
bool isPrime(int n){
  for (int i = 2; i < n; i++){
    if (isDivisibleBy(n, i)){
      return false;
    }
  }
    return true;
}

int nextPrime(int n){
  for (int i = n + 1;true; i++){
    if (isPrime(i)){
      return i;
    }
  }
  return 0;
}

int countPrimes(int a, int b){
  int ans = 0;
  for (int i = a; i <= b; i++){
    if (isPrime(i)){
      ans = ans + 1;
    }
  }
  return ans;
}

bool isTwinPrime(int n){
  if (isPrime(n)){
    return (isPrime(n + 2) || (isPrime(n - 2)));
  }
  return false;
			       
      
}

int nextTwinPrime(int n){
  for (int i = n + 1;true; i++){
    if (isTwinPrime(i)){
      return i;
    }
  }
  return 0;
}

int largestTwinPrime(int a, int b){
  int ans = -1;
  for (int i = a; i <= b; i++){
    if ((isTwinPrime(i)) && (i > ans)){
      ans = i;
    }
  }
  return ans;
}

