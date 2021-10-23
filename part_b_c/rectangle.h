
#ifndef RECTANGLE
#define RECTANGLE

#include "square.h"

class Rectangle : public Square
{
private:
    double sideB;

public:
    Rectangle(double xOrigin, double yOrigin, double sideA, double sideB, const char *name) : Square(xOrigin, yOrigin, sideA, name)
    {
        this->sideB = sideB;
    };
    double area() { return getSideA() * getSideB(); }
    double perimeter() { return getSideA() * 2 + getSideB() * 2; }
    virtual void display();
    double getSideB() const { return sideB; }
    void setSideB(double newB) { sideB = newB; }
};

#endif