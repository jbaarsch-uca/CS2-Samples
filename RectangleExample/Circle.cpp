#include "Circle.h"

// Constructors
Circle::Circle() {
	radius = 1;
}
Circle::Circle(double radius) {
	this->radius = radius;
}
Circle::Circle(Circle& otherCircle) {
	if (this != &otherCircle) {
		this->radius = otherCircle.radius;
	}
}
// getters and setters
void Circle::setRadius(double radius) {
	this->radius = radius;
}
double Circle::getRadius() {
	return radius;
}
double Circle::getArea() {
	double PI = 3.1415;
	return PI * radius * radius;
}
// operator overloads
Circle& Circle::operator=(Circle& otherCircle) {
	if (this != &otherCircle) {
		this->radius = otherCircle.radius;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& strm, Circle& circle) {
	strm << "A Circle with radius: " << circle.getRadius() <<
		" and an area of " << circle.getArea();
	return strm;
}
