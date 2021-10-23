// lab5ExA.cpp
// ENSF 614 Fall 2021 - LAB 5 - EXERCISE B

#include <iostream>
#include <iomanip>
#include <math.h>
#include "point.h"

#define STARTING_VAL 1000;

Point::Point(double x, double y)
{
    setXCoord(x);
    setYCoord(y);
    pointID = idCount++;
}

int Point::idCount = STARTING_VAL;

int Point::counter()
{
    return idCount - STARTING_VAL;
}

void Point::display()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "X-coordinate: " << xCoord << std::endl;
    std::cout << "Y-coordinate: " << yCoord << "\n"
              << std::endl;
}

double Point::distance(const Point &that)
{
    return sqrt(pow(getXCoord() - that.getXCoord(), 2) +
                pow(getYCoord() - that.getYCoord(), 2));
}

double Point::distance(const Point &A, const Point &B)
{
    return sqrt(pow(A.getXCoord() - B.getXCoord(), 2) +
                pow(A.getYCoord() - B.getYCoord(), 2));
}
