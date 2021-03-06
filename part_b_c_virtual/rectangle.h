
#ifndef RECTANGLE
#define RECTANGLE

#include "square.h"

// class Rectangle : public virtual Square
class Rectangle : public Square
{
private:
    double sideB;

public:
    Rectangle(double xOrigin, double yOrigin, double sideA, double sideB, const char *name)
        : Shape(xOrigin, yOrigin, name),
          Square(xOrigin, yOrigin, sideA, name),
          sideB(sideB){};
    virtual double area() { return getSideA() * getSideB(); }
    virtual double perimeter() { return getSideA() * 2 + getSideB() * 2; }
    virtual void display();
    double getSideB() const { return sideB; }
    void setSideB(double newB) { sideB = newB; }
};

#endif