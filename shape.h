
#ifndef SHAPE
#define SHAPE

#include "point.h"

class Shape
{
private:
    // is this fine?
    Point origin = Point(0, 0);
    char *shapeName;

public:
    Shape(double xOrigin, double yOrigin, const char *src);
    virtual ~Shape();
    virtual const Point getOrigin() const { return origin; }
    virtual char *getName() const { return shapeName; }
    virtual void display();
    double distance(Shape &other);
    static double distance(Shape &the_shape, Shape &other);
    void move(double dc, double dy);

    Shape(const Shape &source);
    Shape &operator=(const Shape &rhs);
};

#endif