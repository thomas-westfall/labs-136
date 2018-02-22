/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 3
Ashokan Reservoir data manipulation 
*/

#include "funcs.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <limits>
#include <cstddef>
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

double mineast(){
   
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
 double ans = numeric_limits<double>::max(); 
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    // for example, to print the date and East basin storage:
  if (eastSt < ans){
    ans = eastSt;
  }
 }
 return ans;
 fin.close();

}

double maxeast(){
  
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
double ans = 0; 
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    // for example, to print the date and East basin storage:
  if (eastSt > ans){
    ans = eastSt;
  }
 }
 return ans;
 fin.close();

}

string compare(string a, string b){

  return "";
  
}
