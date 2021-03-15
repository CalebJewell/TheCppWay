#include <stdlib.h>
#include <stdio.h>
#include "MyPoint.h"
#include<math.h>
#include <iostream>

using namespace std;

//Implementing MyPoint Class
MyPoint::MyPoint() {
	x = 0; 
	y = 0;
}

// allows me to create points in main 
MyPoint::MyPoint(double x1, double y1) {
	x = x1;
	y = y1;
}

double MyPoint::getx() {
	return x;
}

double MyPoint::gety() {
	return y;
}

//uses the distance formula between two points to find dist
double MyPoint::distance(MyPoint mp) {	// 
	double dist;
	double mpx = (mp.getx() - x);
	double mpy = (mp.gety() - y);
	dist = sqrt(pow(mpx, 2.0) + pow(mpy, 2.0));
	return dist;
}
