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

void readImage(int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(int image[MAX_H][MAX_W], int height, int width, string name);
void copy(int image[MAX_H][MAX_W], int imageb[MAX_H][MAX_W], int height, int width);
void invert(int image[MAX_H][MAX_W], int height, int width);
void inverthalf(int image[MAX_H][MAX_W], int height, int width);
void box(int image[MAX_H][MAX_W], int height, int width);
void frame(int image[MAX_H][MAX_W], int height, int width);
void scale(int image[MAX_H][MAX_W], int height, int width);
void pixelate(int image[MAX_H][MAX_W], int height, int width);
