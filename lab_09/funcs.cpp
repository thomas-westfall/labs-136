/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 9
Image Processing
*/



#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width, string name) {
	ofstream ostr;
	ostr.open(name);
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

void copy(int image[MAX_H][MAX_W], int imageb[MAX_H][MAX_W], int height, int width){
  	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			image[row][col] = imageb[row][col];
		}
	}
	return;
}

void invert(int image[MAX_H][MAX_W], int height, int width){
  	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
		  image[row][col] = 255 - image[row][col];
		}
	}
	return;
}

void inverthalf(int image[MAX_H][MAX_W], int height, int width){
  	for(int row = 0; row < height; row++) {
		for(int col = width / 2; col < width; col++) {
		  image[row][col] = 255 - image[row][col];
		}
	}
	return;
}

void box(int image[MAX_H][MAX_W], int height, int width){
  for(int row = height / 4; row < (height * 3) / 4; row++) {
	  for(int col = width / 4; col < (width * 3) / 4; col++) {
		  image[row][col] = 255;
		}
	}
	return;
}

void frame(int image[MAX_H][MAX_W], int height, int width){
  for(int row = height / 4; row < (height * 3) / 4; row++) {
    image[row][width / 4] = 255;
    image[row][(width * 3) / 4] = 255;

  }
  for(int col = width / 4; col < (width * 3) / 4; col++) {
    image[height / 4][col] = 255;
    image[(height * 3) / 4][col] = 255;
  }

	return;
}

void scale(int image[MAX_H][MAX_W], int height, int width){
  int imageb[MAX_H][MAX_W];
  copy(imageb, image,height,width);
  height = height * 2;
  width = width * 2;
  int rowb = 0;
  int colb = 0;
  	for(int row = 0; row < height; row = row + 2) {
		for(int col = 0; col < width; col = col + 2) {
		  
		  image[row][col] = imageb[rowb][colb];
		  image[row + 1][col] = imageb[rowb][colb];
		   image[row][col + 1] = imageb[rowb][colb];
		   image[row + 1][col + 1] = imageb[rowb][colb];
		  colb++;	    
		}
		rowb++;
		colb = 0;
	}
	return;
}

void pixelate(int image[MAX_H][MAX_W], int height, int width){
  int imageb[MAX_H][MAX_W];
  int avg = 0;
  copy(imageb, image, height, width);
  	for(int row = 0; row < height; row = row + 2) {
		for(int col = 0; col < width; col = col + 2) {
		  avg = 0;
		  avg = imageb[row][col] + imageb[row + 1][col] + imageb[row][col + 1] + imageb[row + 1][col + 1];
		  avg = avg / 4;
		  image[row][col] = avg;
		  image[row + 1][col] = avg;
		  image[row][col + 1] = avg;
		  image[row + 1][col + 1] = avg;
		}
	}
	return;
}
