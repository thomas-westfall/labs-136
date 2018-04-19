/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 9
Image processing
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
	// and save this new image to file "task-a.pgm"
	writeImage(out, h, w, "task-a.pgm");

	copy(out,img,h,w);
	inverthalf(out,h,w);
	writeImage(out, h, w, "task-b.pgm");
	
	copy(out,img,h,w);
	box(out,h,w);
	writeImage(out, h, w, "task-c.pgm");

	copy(out,img,h,w);
	frame(out,h,w);
	writeImage(out, h, w, "task-d.pgm");
	
	copy(out,img,h,w);
	scale(out,h,w);
	writeImage(out, h*2, w*2, "task-e.pgm");
	
	copy(out,img,h,w);
	pixelate(out,h,w);
	writeImage(out, h, w, "task-f.pgm");
	


}

