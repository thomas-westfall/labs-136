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
using namespace std;

double east_storage(string datex){
 
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); // read one line from the file

string date;
double eastSt;
double eastEl;
double westSt;
double westEl;
 
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    // for example, to print the date and East basin storage:
  if (datex == date){
    return eastSt;
  }
}
 return 0.0;
 fin.close();



}

int main() {

  cout << east_storage("12/16/2016") <<endl;
  
  /*
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); // read one line from the file

string date;
double eastSt;
double eastEl;
double westSt;
double westEl;
 
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    // for example, to print the date and East basin storage:
    cout << date << " " << eastSt << endl;
}

 fin.close();
  */
  return 0;
  
}
