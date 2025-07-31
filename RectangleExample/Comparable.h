#ifndef COMPARABLE_H
#define COMPARABLE_H
#include "Shape.h"

class Shape;

class Comparable: public Shape
{
public:
	virtual int compare(Comparable& other) = 0;
};
#endif
