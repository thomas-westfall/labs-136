/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 2 Task B
Function to print out interval of integers from x to y such that [x,y)
*/

#include <iostream>
using namespace std;


int print_interval(int x,int y){
for(int i = x; i < y; i++) {
  cout << i << " ";

}
 cout<<"\n";


}
int main() {



  std::cout << "Interval from -5 to 5\n";
  print_interval(-5,5);
}
