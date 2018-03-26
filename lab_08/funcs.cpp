/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 8
Indent
*/

#include "funcs.h"
#include <iostream>
#include <string>

string removeLeadingSpaces(string line){
  string ans = "";
  int counter = 0;
  for(int i = 0; i < line.size(); i++){
    if(line[i] != ' '){
      break;
    }
     counter = counter + 1;
  }
  for (int j = counter; j < line.size(); j++){
    ans = ans + line[j];
  }
  return ans;
}

int countChar(string line, char c){
  int ans = 0;
  for (int i = 0; i < line.size(); i++){
    if(line[i] = c){
      ans = ans + 1;
    }
  }
  return ans;
}
