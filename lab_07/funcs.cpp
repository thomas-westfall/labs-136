/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 7
Cipher
*/

#include "funcs.h"
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <string>
#include <fstream>

void testascii(string s){
  for(int i = 0; i < s.size(); i++){
    cout<<s[i]<< " "<<(int)s[i] << endl;
  }
}

char shiftChar(char c, int rshift){
  char ans = 'c';
  int val = (int)c;

  if(!isalpha(c)){
    return c;
  }
  
  if((val > 64 && val < 91) && val + rshift > 90){
    ans = 64 + ((val + rshift) - 90);
  }
  else{
    ans = val + rshift;
  }
    
  if((val > 96 && val < 122) && val + rshift > 122){
    ans = 96 + ((val + rshift) - 122);
  }
  else{
    if((val > 96 && val < 122) && val + rshift <= 122){
    ans = val + rshift;
    }
  }

  
  return ans;
}

string encryptCaesar(string plaintext, int rshift){
  string ans = "";
    for(int i = 0; i < plaintext.size(); i++){
      ans = ans + shiftChar(plaintext[i], rshift);
      
  }
  return ans;
}

string encryptVigenere(string plaintext, string keyword){
  string ans = "";
  int temp = 0;
  int rshift;
     for(int i = 0; i < plaintext.size(); i++){
       rshift = (int)keyword[temp];
       //rshift is too big, make it remainder
       cout<<rshift<<endl;
       ans = ans + shiftChar(plaintext[i], rshift);
       temp = temp + 1;
       if(temp == keyword.size()){
	 temp = 0;
	   }
      
     }
  return ans;
}

string decryptCaesar(string ciphertext, int rshift){
  string ans = "";
  return ans;
}

string decryptVigenere(string ciphertext, string keyword){
  string ans = "";
  return ans;
}

