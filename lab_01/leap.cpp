/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 1 Task C
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter year: ";
	int year = 0;
	cin >> year;

	if (! ((year % 4) == 0)){
	  std::cout << "Common year" << endl;
	}
	else{
	  if (! ((year % 100) == 0)){
	    std::cout << "Leap year" << endl;
	  }
	  else{
	    if (! ((year % 400) == 0)){
	      std::cout << "Common year" << endl;
	    }
	    else{
	      std::cout << "Leap year" << endl;
	    }
	  }
	}
}
	    



	

     
