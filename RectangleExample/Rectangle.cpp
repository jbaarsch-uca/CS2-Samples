#include "Rectangle.h"
#include <iostream>


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
