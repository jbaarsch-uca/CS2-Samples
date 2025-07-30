#include "Triangle.h"

// Constructors: default, one with base and height, and copy
Triangle::Triangle() {
	base = 1;
	height = 1;
}
Triangle::Triangle(int base, int height) {
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
int Triangle::getBase() {
	return base;
}
int Triangle::getHeight() {
	return height;
}
double Triangle::getArea() {
	return .5 * base * height;
}
void Triangle::setBase(int base) {
	this->base = base;
}
void Triangle::setHeight(int height) {
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
