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
#include <string>
#include <iomanip>
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


//note: this method uses the dates from a <= date <= b + 1, instead of
//a <= date <= b since the example in the lab instructions does this (which was
// 9/13/2016 to 9/16/2016)
string compare(string a, string b){
  string ans = "";
  
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
 bool inrange = false;
 bool secondflag = false;
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    // for example, to print the date and East basin storage:
    if (inrange){
    ans = ans + date + " ";
    if (eastEl < westEl){
      ans = ans + "West\n";
    }
    if (eastEl > westEl){
      ans = ans + "East\n";
    }
    if (eastEl == westEl){
      ans = ans + "Equal\n";
    }
  }
  if (date == a){
    ans = "\n" + ans + date + " ";
    if (eastEl < westEl){
      ans = ans + "West\n";
    }
    if (eastEl > westEl){
      ans = ans + "East\n";
    }
    if (eastEl == westEl){
      ans = ans + "Equal\n";
    }
    inrange = true;
  }


  if (secondflag){

    break;
  }
  
    
  if (date == b){
   
    secondflag = true;
  }
 }
 return ans;
 fin.close();

}

string reverseorder(string a, string b){
    string ans = "";
  
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
 bool inrange = false;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {

// need to use stringstream to format westEl to two decimal values
stringstream ss;
ss << std::setprecision(5) << westEl;
string westElstr = ss.str();
     
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    // for example, to print the date and East basin storage:
  if (inrange){
    ans = date + " " + westElstr + " ft\n" + ans;
  }
  if (date == a){
    ans = date + " " + westElstr + " ft";
    inrange = true;
  }


  if (date == b){
ans = "\n" + ans;
    break;
  }
 }
 return ans;
 fin.close();
}
