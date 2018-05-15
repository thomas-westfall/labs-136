#include <iostream>
#include <string>
#include "social3.h"
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

  int numusrs = 0;
    for(int i = 0; i < numusrs; i++){
      for(int j = 0; j < numusrs; j++){
	following[i][j] = false;
      }
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

bool Network::follow(string usrn1, string usrn2){
  int numusrs = 0;

  while (profiles[numusrs].getUsername() != "" && numusrs < MAX_USERS){
    numusrs++;  
  }
  
  for(int k = 0; k < numusrs; k++){
    for(int l = 0; l < numusrs; l++){
      if (profiles[k].getUsername() == usrn1 && profiles[l].getUsername() == usrn2){
	following[k][l] = true;
	return true;
      }
    }
  }
}


void Network::printDot(){
  int numusrs = 0;

  while (profiles[numusrs].getUsername() != "" && numusrs < MAX_USERS){
    cout<< "\"@" + profiles[numusrs].getUsername() + "\""<<endl;
    numusrs++;
  }
  cout<<endl;

   for(int i = 0; i < numusrs; i++){
    for(int j = 0; j < numusrs; j++){
      if(following[i][j] == true)
	cout<<"\"@" + profiles[i].getUsername() + "\" -> \"@" + profiles[j].getUsername() + "\""<<endl;
    }
  }

}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
