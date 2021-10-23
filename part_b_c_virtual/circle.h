
#ifndef CIRCLE
#define CIRCLE

#include "shape.h"

class Circle : public virtual Shape
{
private:
    double radius;

public:
    Circle(double xOrigin, double yOrigin, double radius, const char *name) : Shape(xOrigin, yOrigin, name)
    {
        this->radius = radius;
    };
    virtual double area() { return radius * radius * 3.14159265359; }
    virtual double perimeter() { return 2 * radius * 3.14159265359; }
    virtual void display();
    double getRadius() const { return radius; }
    void setRadius(double newRad) { radius = newRad; }
};

#endif