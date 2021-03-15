#include<iostream>
#include<string>
#include<math.h>
#include "MyPoint.h"
#include "ThreeDPoint.h"

using namespace std;

int main() {
	
	cout << "Caleb Jewell" << endl << "";

	//creating a MyPoint class objects
	MyPoint p1(1, 2);
	MyPoint p2(10, 30.5);
	
	// call the distance function with respect to p1 and passes in p2
	cout <<"Distance between the two points: " << p1.distance(p2) << endl; 

	//creating a ThreeDPoint class object 
	ThreeDPoint point1(0, 0, 0);
	ThreeDPoint point2(10, 30, 25.5);

	//calling the distance function with respect to point1 and passing in point2
	cout <<"Distance between points in 3D space: " << point1.distance(point2) << endl;
		
	return 0;
}
