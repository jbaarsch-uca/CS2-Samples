#ifndef RECTANGLE
#define RECTANGLE
#include <iostream>


class Rectangle {
private:
	int length;
	int width;
public:
	Rectangle();
	Rectangle(int l, int w);
	int getLength();
	int getWidth();
	void setLength(int l);
	void setWidth(int w);
	int getArea();
};


#endif // !RECTANGLE

