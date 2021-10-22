
#ifndef CURVE_CUT_H
#define CURVE_CUT_H

#include "rectangle.h"
#include "circle.h"

class CurveCut : public Circle, public Rectangle
{
public:
    CurveCut(double xOrigin, double yOrigin, double sideA, double sideB, double radius, const char *name);
    double area() const;
    double perimeter() const;
    virtual void display();
};

#endif