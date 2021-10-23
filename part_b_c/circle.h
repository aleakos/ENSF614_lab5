
#ifndef CIRCLE
#define CIRCLE

#include "shape.h"

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double xOrigin, double yOrigin, double radius, const char *name) : Shape(xOrigin, yOrigin, name)
    {
        this->radius = radius;
    };
    double area() const { return radius * radius * 3.14159265359; }
    double perimeter() const { return 2 * radius * 3.14159265359; }
    virtual void display();
    double getRadius() const { return radius; }
    void setRadius(double newRad) { radius = newRad; }
};

#endif