#ifndef RECTANGLE_CONSOLE
#define RECTANGLE_CONSOLE
#include "Rectangle.h"
#include <iostream>
using namespace std;

class RectangleConsole
{
public:
	int getInt(string label);
	void displayRectangle(Rectangle* rect);
	void displayText(string text);
};


#endif

