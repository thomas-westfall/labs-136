/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 3
Ashokan Reservoir data manipulation 
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "funcs.h"
#include <limits>
#include <cstddef>
using namespace std;

int main() {

cout << "Task A test (east storage on 12/16/16): " << east_storage("12/16/2016") <<endl;
cout << "Task B test 1 (mineast): " << mineast() << endl;
cout << "Task B test 2 (maxeast): " << maxeast() << endl;
cout << "Task C test: " << compare("12/16/16","12/17/16") << endl;
  return 0;

}
