/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 12
Recursion
*/



#include <iostream>
#include "funcs.h"
#include <math.h>

using namespace std;


void printRange(int left, int right){
      if (left <= right){
        cout << left << " ";
        printRange(left+1,right);      //recursive case    
      }
      
    else 
      return;     //base case
    
}

int sumRange(int left, int right){
  if(left > right)
    return 0;
  else
    return left + sumRange(left + 1, right);
}

int sumArrayInRange(int *arr, int left, int right){
  if (left > right)
    return 0;
   else
     return arr[left] + sumArrayInRange(arr, left + 1, right);
}

int sumArray(int *arr, int size){
  return sumArrayInRange(arr, 0, size-1);
}

bool isAlphanumeric(string s){
  if(s == "")
    return true;
  else{
    if(!isalnum(s[0]))
      return false;
    else
      return isAlphanumeric(s.substr(1,s.length()-1));
  }
}

bool nestedParens(string s){
  if(s == "")
    return true;
  if(s.substr(0,1) != "(")
	    return false;
  if(s.find("()") != string::npos)
    return nestedParens(s.substr(0,(s.find("()"))) + s.substr(s.find("()")+2, s.length() - s.substr(0,s.find("()")).length() + 2));
  return false;
							    
}

bool divisiblehelper(int *prices, int size, int sum){
   if (sum == 0)
     return true;
   if (size == 0 && sum != 0)
     return false;
 
   //If "last" painting is greater than half, then it isn't used
   //since its worth too much to be split between Bob and Alice
   if (prices[size-1] > sum)
     return divisiblehelper(prices, size-1, sum);
   
   //since the last element can be used in the sum, we check if either Alice
   //or Bob can take it. We then remove it from the possible paintings that
   //can be given to either Bob or Alice since it was just given to one of them
   //thus, the previous element to the original last element
   //is now the current last. this continues until no more paintings can be
   //split between the two such that the sum is equally half
   return divisiblehelper(prices, size-1, sum) || divisiblehelper(prices, size-1, sum-prices[size-1]);
}
 
bool divisible(int *prices, int size){
  int sum =  sumArray(prices, size);
    //Cant divide an odd integer evenly so, all odd sums are never divisible
    if (sum%2 == 1)
       return false;
 
    //Since sum is divisible by 2, we can now check if Alice and Bob can get
    //half the sum each using the helper
    return divisiblehelper(prices, size, sum/2);
}
