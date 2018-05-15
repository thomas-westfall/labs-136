/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 13
Objects
*/
#include <string>

class Profile {
private:
  std::string username;
  std::string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
  Profile(std::string usrn, std::string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
  std::string getUsername();
    // Return name in the format: "displayname (@username)"
  std::string getFullName();
    // Change display name
  void setDisplayName(std::string dspn);
};

