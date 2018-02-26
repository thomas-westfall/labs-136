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
cout << "Task C test (compare from 11/16/2016 to 11/30/2016): " << compare("11/16/2016","11/30/2016");
cout << "Task D test (reverse order from 05/29/2016 to 06/02/2016): " << reverseorder("05/29/2016","06/02/2016") << endl;
  return 0;

}

