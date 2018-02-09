/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 2 Task A
Input validation- Determine if input is an int, then if 0 < input < 100
*/

#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
  cout << "Please enter an integer: ";
  
  while (true){
        int firstnum = 0;

	cin >> firstnum;

	if (cin.fail()){ // not an integer
	    cout << "Please enter an integer: ";

            // delete error flags
            cin.clear();
	    
            // delete input stream
	    cin.ignore(INT_MAX, '\n'); 
	    }
	
	    else{ // Input is an integer
	        while ((firstnum <= 0) || (firstnum >= 100)){
	  
		  cout << "Please re-enter: ";
		  cin >> firstnum;
	 	}
		cout << "Number squared is " << firstnum * firstnum <<endl;
		
	      break;
	    }
	      

  }
  
  
        


}
