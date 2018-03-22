/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 7
Cipher
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void testascii(string s);
char shiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
string encryptVigenere(string plaintext, string keyword);
string decryptCaesar(string ciphertext, int rshift);
string decryptVigenere(string ciphertext, string keyword);
