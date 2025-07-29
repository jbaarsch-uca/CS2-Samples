#include "Triangle.h"

// Constructors: default, one with base and height, and copy
Triangle::Triangle() {
	base = 1;
	height = 1;
}
Triangle::Triangle(double base, double height) {
	this->base = base;
	this->height = height;
}
Triangle::Triangle(Triangle& otherTriangle) {
	if (this != &otherTriangle) {
		this->base = otherTriangle.base;
		this->height = otherTriangle.height;
	}
}

// Getters and setters for base and height and area
double Triangle::getBase() {
	return base;
}
double Triangle::getHeight() {
	return height;
}
double Triangle::getArea() {
	return .5 * base * height;
}
void Triangle::setBase(double base) {
	this->base = base;
}
void Triangle::setHeight(double height) {
	this->height = height;
}

// equals and << overload
Triangle& Triangle::operator=(Triangle& otherTriangle) {
	if (this != &otherTriangle) {
		this->base = otherTriangle.base;
		this->height = otherTriangle.height;
	}
	return *this;
}

ostream& operator<<(ostream& strm, Triangle& triangle) {
	strm << "A Triangle with base: " << triangle.getBase() <<
		", height: " << triangle.getHeight() <<
		" and an area of " << triangle.getArea();
	return strm;
}
