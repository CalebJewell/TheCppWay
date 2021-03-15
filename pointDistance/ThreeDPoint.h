#pragma once
#include "MyPoint.h" //Base class
class ThreeDPoint:
	public MyPoint
{
public:

	ThreeDPoint();
	ThreeDPoint(double x, double y, double z);
	double getz();
	double distance(ThreeDPoint pz);

private:
	double z;

};

