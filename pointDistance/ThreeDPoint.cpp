#include <stdio.h>
#include <iostream>
#include "ThreeDPoint.h"
#include <math.h>

using namespace std;

//Implementing the derived class ThreeDPoint
ThreeDPoint::ThreeDPoint() {
	z = 0;
}
// A constructor that assigns values to the coordinates x,y, and z. 
ThreeDPoint::ThreeDPoint(double xC, double yC, double zC):MyPoint(xC,yC) {
	z = zC; 
}

double ThreeDPoint::getz() {
	return z;
}
//get my distance in 3D space using the equation 
double ThreeDPoint::distance(ThreeDPoint mp3) {
	double dist = 0;
	dist = sqrt((pow(getx() - mp3.getx(), 2)) + pow(gety() - mp3.gety(), 2) + pow(getz() - mp3.getz() , 2));
	return dist;
}
