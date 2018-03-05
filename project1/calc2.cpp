#include <iostream>
using namespace std;

int main() {
  int ans; //the sum of the values
  int val; //the current value
  char sign; //either +, -, or ;
  cin >> ans; //first value 
  while (cin >> sign >> val){ //while sign and current value are valid
    if (sign == ';'){
      cout<<ans<<endl;
      ans = val; //move on to next sum
      continue;
    }
    

    //add current value to ans if sign is positive
    if (sign == '+'){
      ans = ans + val; 
    }
    //if sign isnt positive, subtract current value from ans
    else{
      ans = ans - val;
    }
  }
  cout<<ans<<endl; //print the last sum
    
}
