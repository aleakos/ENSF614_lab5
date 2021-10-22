
#ifndef SQUARE
#define SQUARE

#include "shape.h"

class Square : public Shape
{
private:
    double sideA;

public:
    Square(double xOrigin, double yOrigin, double side, const char *name) : Shape(xOrigin, yOrigin, name)
    {
        sideA = side;
    };
    double area() const { return sideA * sideA; }
    double perimeter() const { return sideA * 4; }
    virtual void display();
    double getSideA() const { return sideA; }
    void setSideA(double newA) { sideA = newA; }
};

#endif