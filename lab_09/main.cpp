/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 7
Cipher
*/

#include <iostream>
#include "funcs.h"
using namespace std;

int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	copy(out,img,h,w);
	invert(out,h,w);
	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);

	while(true){
	  string x;
	  cout<< "Task A: Inverting the picture complete!\nOpen outImage.pgm to view, type any character to continue: ";
	  cin >> x;
	  if(x != ""){
	    break;
	  }
	}
	copy(out,img,h,w);
	inverthalf(out,h,w);
	writeImage(out, h, w);
	
	while(true){
	  string x;
	  cout<< "Task B: Inverting half of the picture complete!\nOpen outImage.pgm to view, type any character to continue: ";
	  cin >> x;
	  if(x != ""){
	    break;
	  }
	}


	
}

