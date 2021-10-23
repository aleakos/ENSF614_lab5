// lab5ExA.cpp
// ENSF 614 Fall 2021 - LAB 5 - EXERCISE B

#include <assert.h>
#include <iostream>
#include <string.h>
#include <iomanip>

#include "point.h"
#include "shape.h"

Shape::Shape(double xOrigin, double yOrigin, const char *src) : origin(xOrigin, yOrigin)
{
    shapeName = new char[strlen(src) + 1];
    strcpy(shapeName, src);
}

Shape::~Shape()
{
    delete[] shapeName;
}

void Shape::display()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Shape Name: " << shapeName << std::endl;
    std::cout << "X-coordinate: " << origin.getXCoord() << std::endl;
    std::cout << "Y-coordinate: " << origin.getYCoord() << "\n"
              << std::endl;
}

void Shape::move(double dx, double dy)
{
    origin.setXCoord(origin.getXCoord() + dx);
    origin.setYCoord(origin.getYCoord() + dy);
}

double Shape::distance(Shape &other)
{
    return Point::distance(getOrigin(), other.getOrigin());
}

double Shape::distance(Shape &the_shape, Shape &other)
{
    return Point::distance(the_shape.getOrigin(), other.getOrigin());
}

Shape &Shape::operator=(const Shape &rhs)
{

    if (this != &rhs)
    {
        origin = rhs.getOrigin();
        delete[] shapeName;
        shapeName = new char[strlen(rhs.getName()) + 1];
        assert(shapeName != NULL);
        strcpy(shapeName, rhs.getName());
    }
    return *this;
}

Shape::Shape(const Shape &src) : origin(src.getOrigin())
{
    // *this = src;
    shapeName = new char[strlen(src.getName()) + 1];
    assert(shapeName != 0);
    strcpy(shapeName, src.getName());
}