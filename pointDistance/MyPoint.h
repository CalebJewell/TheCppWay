#pragma once
class MyPoint // creates a MyPoint class with class 
{
public:
	MyPoint();
	MyPoint(double x1, double y1);
	double getx();
	double gety();
	double distance(MyPoint mp);
private:
	double x, y;
};

