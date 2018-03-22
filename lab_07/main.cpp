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

  cout << "Task A test (testascii(\"Cat :3 Dog\"): "<<endl;
  testascii("Cat :3 Dog");
  cout<<endl;
  cout << "Task B test (encryptCaesar(\"Way to Go!\", 5): " <<encryptCaesar("Way to Go!", 5) <<endl;
  cout << "Task C test (encryptVigenere(\"Hello, World!\", \"cake\"): " << encryptVigenere("Hello World!", "cake") <<endl;
  cout << "Task D test (decryptCaesar(\"Rovvy, Gybvn!\",10): " << decryptCaesar("Rovvy, Gybvn!", 10) <<endl;
  cout << "Task D test2 (decryptVigenere(\"Jevpq, Wyvnd!\", \"cake\"): " << decryptVigenere("Jevpq, Wyvnd!", "cake") <<endl;


  return 0;

}

