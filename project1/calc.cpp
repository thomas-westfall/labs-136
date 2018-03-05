#include <iostream>
2using namespace std;
3
4int main() {
5  int ans; //the sum of the values
6  int val; //the current value
7  char sign; //either + or -
8  cin >> ans; //first value 
9  while (cin >> sign >> val){ //while sign and current value are valid
10
11    //add current value to ans if sign is positive
12    if (sign == '+'){
13      ans = ans + val; 
14    }
15    //if sign isnt positive, subtract current value from ans
16    else{
17      ans = ans - val;
18    }
19  }
20  cout<<ans<<endl; //print the sum
21
