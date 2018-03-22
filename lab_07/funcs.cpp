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
       if(rshift > 64 && rshift < 91){
	 rshift = rshift - 65;
       }
       if(rshift > 96 && rshift < 122){
	 rshift = rshift - 97;
       }
       ans = ans + shiftChar(plaintext[i], rshift);
       if (isalpha(plaintext[i])){
       temp = temp + 1;
       }
       if(temp == keyword.size()){
	 temp = 0;
	   }
      
     }
  return ans;
}

string decryptCaesar(string ciphertext, int rshift){
  string ans = "";
  for (int i = 0; i < ciphertext.size(); i++){
    ans = ans + shiftChar(ciphertext[i], 26 - rshift);
  }
  return ans;
}

string decryptVigenere(string ciphertext, string keyword){
  string ans = "";
  int temp = 0;
  int rshift;
     for(int i = 0; i < ciphertext.size(); i++){
       rshift = (int)keyword[temp];
       if(rshift > 64 && rshift < 91){
	 rshift = rshift - 65;
       }
       if(rshift > 96 && rshift < 122){
	 rshift = rshift - 97;
       }
       ans = ans + shiftChar(ciphertext[i], 26 - rshift);
       if (isalpha(ciphertext[i])){
       temp = temp + 1;
       }
       if(temp == keyword.size()){
	 temp = 0;
       }
     }
  return ans;
}

