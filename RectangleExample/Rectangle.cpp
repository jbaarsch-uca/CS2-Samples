#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Rectangle(1, 1) {}

Rectangle::Rectangle(int l, int w) : length(l), width(w) {
}

void Rectangle::setLength(int l) {
	length = l;
}

int Rectangle::getLength() {
	return length;
}
int Rectangle::getWidth() {
	return width;
}

void Rectangle::setWidth(int w) {
	width = w;
}

int Rectangle::getArea() {
	return length * width;
}
