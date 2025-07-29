#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Rectangle(1, 1) {}

Rectangle::Rectangle(double l, double w) : length(l), width(w) {
}

Rectangle::Rectangle(Rectangle& otherRectangle) {
	if (this != &otherRectangle) {
		this->length = otherRectangle.length;
		this->width = otherRectangle.width;
	}
}

void Rectangle::setLength(double l) {
	length = l;
}

double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() {
	return width;
}

void Rectangle::setWidth(double w) {
	width = w;
}

double Rectangle::getArea() {
	return length * width;
}

Rectangle& Rectangle::operator=(Rectangle& otherRect) {
	if (this != &otherRect) {
		this->length = otherRect.length;
		this->width = otherRect.width;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& strm, Rectangle& rect) {
	strm << "A Rectangle with length: " << rect.getLength() <<
		", width: " << rect.getWidth() <<
		" and an area of " << rect.getArea();
	return strm;
}
