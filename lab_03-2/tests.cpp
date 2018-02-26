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

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;



TEST_CASE("Testing east storage"){
  std::cout << "HELLO WORLD_00\n";
	CHECK(east_storage("12/16/2016"));

}

TEST_CASE("Testing minimum"){
  std::cout << "HELLO WORLD_01\n";
	CHECK(mineast()==49.34);
	
}


TEST_CASE("Testing compare"){
	std::cout<<"HELLO WORLD_02\n";
//	CHECK(compare("11/16/2016","11/30/2016"));
}


TEST_CASE("Testing Reverse order"){
	std::cout<<"Hello_world_03\n";
	CHECK(reverseorder("05/29/2016","06/02/2016"));
}

/*
TEST_CASE(compare(

TEST_CASE(reverseorder(

*/
