#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Triangle : public Shape
{
private:
	double base;
	double height;
public:
	// Constructors: default, one with base and height, and copy
	Triangle();
	Triangle(double base, double height);
	Triangle(Triangle& otherTriangle);

	// Getters and setters for base and height and area
	double getBase();
	double getHeight();
	double getArea();
	void setBase(double base);
	void setHeight(double height);

	// equals and << overload
	Triangle& operator=(Triangle& otherTriangle);
	friend ostream& operator<<(ostream& strm, Triangle& triangle);


};

