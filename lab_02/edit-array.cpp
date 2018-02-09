/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 2 Task C
Edits a pre defined array of 10 values of 1 until the user gives an index that
is out of bounds.
*/

#include <iostream>
using namespace std;

int main() {
  int myData[10];
  
  for(int k = 0; k < 10; k++) {
    myData[k] = 1;

  }


  while (true){
    
  for (int i = 0; i < 10; i++){
    cout<<myData[i]<< " ";
  }
  cout<<"\n";
  
    cout<< "Input index: ";
    int j;
    cin>> j;
    cout<< "Input value: ";
    int v;
    cin>> v;

    if ((j < 0) || (j >= 10)){
      cout<< "Index out of range. Exit."<<endl;
      break;
    }

    myData[j] = v;
    
  }

  
}
