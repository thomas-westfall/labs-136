/*
Author: Thomas Westfall
Course: CSCI-135
Assignment: Project 2

*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
//#include <array>
using namespace std;

void splitOnSpace(string s, string & before, string & after) {
  // reset strings
  before = ""; 
  after = "";
  // accumulate before space
  int i = 0;
  while (i < s.size() && not isspace(s[i])) { before += s[i]; i++; }
  // skip the space
  i++;
  // accumulate after space
  while (i < s.size()) { after += s[i]; i++; }
}

//makes all characters in a string uppercase
string lowertoupper(string word){
  string tempword = "";
  char temp = 'a';
  
   for(int i = 0; i < word.size(); i++){ //converts lowercase to uppercase
    temp = word[i];
    if(int(temp) >= 97 && int(temp) <= 122){
      temp = temp - 32;
    }
    tempword = tempword + temp;
   }
   return tempword;
}

//checks if the word contains any non-alphabetical characters other than '
bool islegal(string word){
  char temp;
  for (int i = 0; i < word.size(); i++){
    temp = word[i];
    
    if(((int)temp < 65 && (int)temp != 39) || ((int)temp > 90 && (int)temp < 97)){
      return false;
    }
    if((int)temp > 122){
      return false;
    }
    
  }
  return true; 
}

//checks if the word is in the dictionary
string checkexists(string word){
  string ans = "Not found";
  string s;
  string before;
  string after;
  ifstream dict("dict.txt");

  //ignore words with special characters
  if (!islegal(word)){ 
    return ans;
  }
  
  while(getline(dict,s)){ //goes through every line of the text file
    splitOnSpace(s,before,after);//use given function to split on space
    if(lowertoupper(word) == before){ //checks if the given word equals the current word
      ans = after;
      
    }
  }
  return ans;
}

string findidentical(string word, string pronounce){
  string ans = "";
  string s;
  string before;
  string after;
  ifstream dict("dict.txt");
  while(getline(dict,s)){
   splitOnSpace(s,before,after);
   //checks if the word is not the same, but the pronounciation is the same
   if(lowertoupper(word) != before && pronounce == after){ 
      ans = ans + before + " ";
    }
  }
  return ans;
}


string findadd(string word, string pronounce){
  string ans = "";
  int counter = 1; // size of the array
  for (int i = 0; i < pronounce.size(); i++){
    if(pronounce[i] == ' '){
      counter = counter + 1;
    }
  }
  //size of the array is now counted. now we construct the array with all of
  //the phonemes for the word
  string original[counter];
  int counterb = 0;

  for (int j = 0; j < pronounce.size(); j++){
    //if its a space, we move on to the next array value.
    //otherwise, we add the current character to the current array value
    if (pronounce[j] == ' '){ 
      counterb = counterb + 1;
    }
    else{
      original[counterb] = original[counterb] + pronounce[j];
    }
  }
  //array for given word is now complete. we now make arrays for every word


  string s;
  string before;
  string after;
  ifstream dict("dict.txt");
  int counterc = 0;
  int counterd = 0;
  
  while(getline(dict,s)){
   splitOnSpace(s,before,after);
   //ignore illegal words
     if (!islegal(before)){
       continue;
     }
    counterd = 1; // size of the current array
  for (int k = 0; k < after.size(); k++){
    if(after[k] == ' '){
      counterd = counterd + 1;
    }
  }
  
  string originalb[counterd]; //the current array
  counterb = 0;

  //fill in the values for the array (same method as before)
  for (int l = 0; l < after.size(); l++){
    if (after[l] == ' '){
      counterb = counterb + 1;
    }
    else{
      originalb[counterb] = originalb[counterb] + after[l];
    }
  }

  //check if the original array is exactly one value larger than the current
  //if not, ignores the current array and moves on to the next
  if (counter + 1 != counterd){
    continue;
  }

  //how many times the current array has the same value as the given array
  //that is in order
  counterc = 0;

    for (int n = 0; n < counter; n++){
      if (original[n] == originalb[n]){
	counterc = counterc + 1;
      }
      else{ //found a difference between the two arrays.
	//shift the current array by 1 to compensate for this difference.
	for (int m = n; m < counter; m++){
	  if (original[m] == originalb[m + 1]){
	    counterc = counterc + 1;
	    
	  }
	}
	break; //the inner for loop iterated through every value already
      }
    }

    //if theres exactly one new phoneme, and the phonemes are still in order,
    //add the current word to the answer
  if (counterc == counter){
    ans = ans + before  + " ";
  }
  }
  return ans;
}


//the remaining two functions use the same method as findadd.
//it constructs two arrays, then compares the array sizes, then counts
//how many times the current array has the same value as the given array
//that is in order.

string findremove(string word, string pronounce){
  string ans = "";
  int counter = 1; // size of the array
  for (int i = 0; i < pronounce.size(); i++){
    if(pronounce[i] == ' '){
      counter = counter + 1;
    }
  }
  
  string original[counter];
  int counterb = 0;

  for (int j = 0; j < pronounce.size(); j++){
    if (pronounce[j] == ' '){
      counterb = counterb + 1;
    }
    else{
      original[counterb] = original[counterb] + pronounce[j];
    }
  }

  // the given word array is constructed. now we construct every word array

  string s;
  string before;
  string after;
  ifstream dict("dict.txt");
  int counterc = 0;
  int counterd = 0;
  
  while(getline(dict,s)){
   splitOnSpace(s,before,after);
     if (!islegal(before)){
       continue;
     }
     
    counterd = 1; // size of the array
  for (int k = 0; k < after.size(); k++){
    if(after[k] == ' '){
      counterd = counterd + 1;
    }
  }
  
  string originalb[counterd];
  counterb = 0;

  for (int l = 0; l < after.size(); l++){
    if (after[l] == ' '){
      counterb = counterb + 1;
    }
    else{
      originalb[counterb] = originalb[counterb] + after[l];
    }
  }
  
  // the current word array is now constructed. we now compare the two arrays
  //if the current word array isn't one less than the original, we ignore it
  if (counter - 1 != counterd){ 
    continue;
  }

  counterc = 0; //how many times both arrays have same value in same order
    for (int n = 0; n < counterd; n++){
      if (original[n] == originalb[n]){
	counterc = counterc + 1;
      }
      else{ //we found a difference, so we make sure its the only difference
	for (int m = n; m < counterd; m++){
	  if (originalb[m] == original[m + 1]){
	    counterc = counterc + 1;
	    
	  }
	}
	break;
      }
    }
    //if all array values of the current array are the same and in order,
    //add it to the answer
    if (counterc == counterd){ 
    ans = ans + before  + " ";
  }
  }
  return ans;
}












string findreplace(string word, string pronounce){
  string ans = "";
  int counter = 1; // size of the array
  for (int i = 0; i < pronounce.size(); i++){
    if(pronounce[i] == ' '){
      counter = counter + 1;
    }
  }
  
  string original[counter];
  int counterb = 0;

  for (int j = 0; j < pronounce.size(); j++){
    if (pronounce[j] == ' '){
      counterb = counterb + 1;
    }
    else{
      original[counterb] = original[counterb] + pronounce[j];
    }
  }



  string s;
  string before;
  string after;
  ifstream dict("dict.txt");
  int counterc = 0;
  int counterd = 0;
  
  while(getline(dict,s)){
   splitOnSpace(s,before,after);
     if (!islegal(before)){
       continue;
     }
    counterd = 1; // size of the array
  for (int k = 0; k < after.size(); k++){
    if(after[k] == ' '){
      counterd = counterd + 1;
    }
  }
  
  string originalb[counterd];
  counterb = 0;

  for (int l = 0; l < after.size(); l++){
    if (after[l] == ' '){
      counterb = counterb + 1;
    }
    else{
      originalb[counterb] = originalb[counterb] + after[l];
    }
  }

  //one of the few differences from the previous functions:
  //checks if the given size does not equal the current size, or if the given
  //and current word are the same. if either is true, ignores the current word.
  if (counter != counterd || word == before){
    continue;
  }

  counterc = 0;

  //there is no need to shift, since the sizes of the two arrays are the same
    for (int n = 0; n < counter; n++){
      if (original[n] == originalb[n]){
	counterc = counterc + 1;
      }
    }
  
    
  if (counterc == counter - 1){
    ans = ans + before  + " ";
  }
  }
  return ans;
}

int main() {
  string W;
  cin>>W; //input word

  //checks if the word exists before anything else
  if (checkexists(W) != "Not found"){
    cout <<"Pronounciation     : " <<checkexists(W)<<endl;
    cout <<"Identical          : " <<findidentical(W, checkexists(W))<<endl;
    cout <<"Add phoneme        : " <<findadd(W, checkexists(W))<<endl;
    cout <<"Remove phoneme     : " <<findremove(W, checkexists(W))<<endl;
    cout <<"Replace phoneme    : " <<findreplace(W, checkexists(W))<<endl;
  }
  else{
    cout<<checkexists(W)<<endl;
  }
	
  return 0;
}
