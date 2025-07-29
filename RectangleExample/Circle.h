#pragma once
#include "Shape.h"
#include <iostream>
class Circle :
    public Shape
{
private:
    double radius;
public:
    // Constructors
    Circle();
    Circle(double radius);
    Circle(Circle& otherCircle);
    // getters and setters
    void setRadius(double radius);
    double getRadius();
    double getArea();
    // operator overloads
    Circle& operator=(Circle& otherCircle);
    friend std::ostream& operator<<(std::ostream& strm, Circle& circle);
};

