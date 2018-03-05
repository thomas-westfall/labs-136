#include <iostream>
using namespace std;

int main() {
  int ans; //the sum of the values
  int val; //the current value
  char sign; // can be +, -, ^, or ;
  char signs; // used to determine if multiple vals need to be squared
  
  cin >> ans; //first value 
  while (cin >> sign){ //while theres still a sign value
    if (sign == ';'){ //check if the addition is complete for the current line
      cout<<ans<<endl;
      cin >> ans; //move on to next sum
      continue;
    }

    //check if the first value needs to be squared
    if (sign == '^'){
       ans = ans * ans; //square first value
      
    }

    else{ //theres more than one number.
      //first checks which values need to be squared
      if (cin >> val >> signs){
	if (signs == '^'){
	  val = val * val;
	}

	//if its not a ^, its a + or -, so we put it back into cin to compute
	//later on
	else{
	  cin.putback(signs);
	}
      }
    }

    //now that all values have been squared as needed, can add & subtract freely
    
    //add current value to ans if sign is positive
    if (sign == '+'){
      ans = ans + val; 
    }
    //check if the sign is negative (so subtraction happens)
    if (sign == '-'){
      ans = ans - val;
    }
  }
}
