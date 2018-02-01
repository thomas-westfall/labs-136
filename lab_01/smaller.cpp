#include <iostream>
using namespace std;

int main() {
  cout << "Enter the first number: ";
	int firstnum = 0;
	cin >> firstnum;

	cout << "Enter the second number: ";
	int secondnum = 0;
	cin >> secondnum;

	if (firstnum < secondnum){
	  std::cout << "The smaller of the two is " << firstnum << endl;
	}
	else{
	  std::cout << "The smaller of the two is " << secondnum << endl;
	}
	

}
