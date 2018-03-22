/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 7
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int x;
  int num = 0;
  cout<< "Enter plaintext: ";
  getline(cin, s);
  cout<< "Enter shift";
  getline(cin, x);

  string ans = "";
  
  for(int i = 0; i < s.size(); i++){
    num = (int)s[i];
    if (
    cout<<s[i]<< " "<<(int)s[i] << endl;
  }
  
  return 0;
  
}
