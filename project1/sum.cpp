//Thomas Westfall
//Lab 1 CSCI 135
#include <iostream>
using namespace std;

int main() {
  int val; //current value
  int ans = 0; //sum of the values
    while(cin >> val) { // While there are still values to add
 
      ans = ans + val; //adds the integer to the current sum
    }
    cout<<ans<<endl; //print the answer when the loop finishes
}
