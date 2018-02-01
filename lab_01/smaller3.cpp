#include <iostream>
using namespace std;

int main() {
  cout << "Enter the first number: ";
	int firstnum = 0;
	cin >> firstnum;

	cout << "Enter the second number: ";
	int secondnum = 0;
	cin >> secondnum;

	cout << "Enter the third number: ";
	int thirdnum = 0;
	cin >> thirdnum;


	int fourthnum = 0;
	
	  if (firstnum <= secondnum){
	    fourthnum = firstnum;
	  }
	  if (secondnum <= firstnum){
	    fourthnum = secondnum;
	  }
	  if (thirdnum <= fourthnum){
	    fourthnum = thirdnum;
	  }
  int min = fourthnum;

  std::cout << "The smaller of the three is " << min << endl;

}
