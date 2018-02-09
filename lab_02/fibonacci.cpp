/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 2 Task D
Prints the first 60 fibbonaci numbers
*/
#include <iostream>
using namespace std;

int main() {
  
int fib[60];
fib[0] = 0;
fib[1] = 1;

for (int i = 2; i < 60; i++){
  fib[i] = fib[i-1] + fib[i-2];
 }




  std::cout << "Printing the first 60 fibbonaci numbers:\n";
  for(int i = 0; i < 60; i++) {
  cout << fib[i] << "\n";

}
 cout<<"\n";
}

/* as i increases, the values being put into the array approach the maximum 
integer an int type can hold (2147483647). Thus, in the case of integer 
overflow, the values turn negative to avoid an error. 
*/

