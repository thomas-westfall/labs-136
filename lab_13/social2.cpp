/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 13
Objects
*/
#include <iostream>
#include <string>
#include "social2.h"
//#include "social.h"
using namespace std;

Profile::Profile(std::string usrn, std::string dspn){
  username = usrn;
  displayname = dspn;
}

Profile::Profile(){
  username = "";
  displayname = "";
}

std::string Profile::getUsername(){
  return username;
}

std::string Profile::getFullName(){
  return displayname; 
}

void Profile::setDisplayName(std::string dspn){
  displayname = dspn;
}

Network::Network(){
  Profile tempb("","");
  numUsers = 0;
  for(int i = 0; i < sizeof(profiles) / 64; i++){
    profiles[i] = tempb;
  }
}

int Network::findID(string usrn){
  //cout<<to_string(sizeof(profiles))<<endl;
  
  for(int i = 0; i < sizeof(profiles) / 64; i++){
    if (profiles[i].getUsername() == usrn)
      return i;
  }
  return -1;
}

bool Network::addUser(string usrn, string dspn){
  Profile temp(usrn, dspn);
  char tempc;

  for(int j = 0; j < usrn.length(); j++){
    tempc = usrn[j];
    if (!isalnum(tempc))
      return false;
	}
  
  if(findID(usrn) != -1) //already found
    return false;

  for(int i = 0; i < sizeof(profiles) / 64; i++){
    if(profiles[i].getFullName() == ""){
    
      profiles[i] = temp;
      return true;
    }
  }
    
  return false;
}


int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
    cout<< nw.addUser("mario" + to_string(i), 
		      "Mario" + to_string(i))<<endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)

}
