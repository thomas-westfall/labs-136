/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 1 Task D
*/

#include <iostream>
using namespace std;



bool isleapyear(int year) {
	if (! ((year % 4) == 0)){
	  return false;
	}
	else{
	  if (! ((year % 100) == 0)){
	    return true;
	  }
	  else{
	    if (! ((year % 400) == 0)){
	      return false;
	    }
	    else{
	      return true;
	    }
	  }
	}
}

int main() {
  cout << "Enter year: ";
  int year = 0;
  cin >> year;

  cout << "Enter month: ";
  int month = 0;
  cin >> month;


  if (isleapyear(year) && (month == 2)) {
    cout << "29 days" << endl;

  }
  else{
    if ((month % 2) == 1){
      cout << "31 days" << endl;
    }
    else{
      if (((month % 2) == 0) && (month != 2)){
	cout << "30 days" << endl;
      }
      else{
	if (month == 2){
	  cout << "28 days" << endl;
	}
    }
    }
  }
     


}
	    
