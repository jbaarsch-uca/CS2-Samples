#ifndef RECTANGLE
#define RECTANGLE
#include "Shape.h"
#include <iostream>


class Rectangle : public Shape {
private:
	double length;
	double width;
public:
	Rectangle();
	Rectangle(double l, double w);
	Rectangle(Rectangle& otherRectangle);  // *
	double getLength();
	double getWidth();
	void setLength(double l);
	void setWidth(double w);
	double getArea();
	Rectangle& operator=(Rectangle& otherRect);
	friend std::ostream& operator<<(std::ostream& strm, Rectangle& rect);
};


#endif // !RECTANGLE

