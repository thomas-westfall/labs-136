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
//
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

bool divisible(int *prices, int size){
/*	if(prices.size() == 0)
		return true;
	return divisible()
	*/
  return true;
}
