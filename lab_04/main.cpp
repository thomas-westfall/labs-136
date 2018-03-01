/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 4

*/

#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
  cout << "Task A test (7 by 4 box):\n" << box(7,4) <<endl;
  cout << "Task B test (11 by 6 checkerboard):\n" << checkerboard(11,6) << endl;
  cout << "Task C test (size 8 cross):\n" << cross(8) <<endl;
  cout << "Task D test (length 6 lower triangle):\n" << lower(6) <<endl;
  cout << "Task E test (length 5 upper triangle):\n" << upper(5) <<endl;
  cout << "Task F test (12 by 5 trapezoid):\n" << trapezoid(12,5) <<endl;
  cout << "Task F test2 (12 by 7 trapezoid):\n" << trapezoid(12,7) <<endl;
  cout << "Task G test (16 by 11 3x3 checkerboard):\n" << checkerboard33(16,11) <<endl;
	
  return 0;
}
