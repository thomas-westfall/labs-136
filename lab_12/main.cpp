/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 12
Recursion
*/

#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
      cout <<"Task A: printRange- "<<endl;
      cout<<"printRange(-2,10) = "<<endl;
      printRange(-2,10);
      cout<<"\n\n";
      
      cout <<"Task B: sumRange- "<<endl;
      cout<<"sumRange(1,3) = "<<sumRange(1, 3)<<endl;
      cout<<"sumRange(-2,10) = "<<sumRange(-2,10)<<endl;
      cout<<"\n";
      
      cout <<"Task C: sumArray- "<<endl;
      
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it
    cout<<endl;
    
      cout <<"Task D: isAlphanumeric- "<<endl;
      cout << "ABCD = "<<isAlphanumeric("ABCD") << endl;        // true (1)
      cout << "Abcd1234xyz = "<<isAlphanumeric("Abcd1234xyz") << endl; // true (1)
 cout << "KLMN 8-7-6 = "<<isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

 cout<<endl;
 
      cout <<"Task E: nestedParens- "<<endl;
      cout << "((())) = "<< nestedParens("((()))") << endl;      // true (1)
	     cout << "() = "<< nestedParens("()") << endl;          // true (1)
	     cout << "\"\" = "<<nestedParens("") << endl;            // true (1)

	     cout << "((( = " <<nestedParens("(((") << endl;         // false (0)
	     cout << "(() = " <<nestedParens("(()") << endl;         // false (0)
	     cout << ")( = " << nestedParens(")(") << endl;          // false (0)
	     cout << "a(b)c = " <<nestedParens("a(b)c") << endl;       // false (0)
	     cout<<endl;
	     
      cout <<"Task F: divisible- "<<endl;
      int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
      cout<<"Is {10, 15, 12, 18, 19, 17, 13, 35, 33} divisible: "<<endl;
      cout<<divisible(prices, 9)<<endl;

      
     
}

