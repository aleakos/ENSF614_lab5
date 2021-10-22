#include <iostream>
#include <iomanip>
#include "curveCut.h"
#include "rectangle.h"

CurveCut::CurveCut(double xOrigin, double yOrigin, double sideA, double sideB, double radius, const char *name) : Circle(xOrigin, yOrigin, radius, name),
                                                                                                                  Rectangle(xOrigin, yOrigin, sideA, sideB, name)
{
    if (radius > sideA || radius > sideB)
    {
        std::cout << "Error: Radius is greater than the length of one of the sides.\n";
        exit(1);
    }
}

double CurveCut::area() const
{
    return Rectangle::area() - (Circle::area() / 4);
}

double CurveCut::perimeter() const
{
    return (Rectangle::perimeter()) - (getRadius() * 2) + (Circle::perimeter() / 4);
}

void CurveCut::display()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    // is this fine since we're saying they're all the same?
    // how tf do we make these virtual?
    std::cout << "Curve Cut Name: " << Rectangle::getName() << std::endl;
    std::cout << "X-coordinate: " << Rectangle::getOrigin().getXCoord() << std::endl;
    std::cout << "Y-coordinate: " << Rectangle::getOrigin().getYCoord() << std::endl;
    std::cout << "Width: " << getSideA() << std::endl;
    std::cout << "Length: " << getSideB() << std::endl;
    std::cout << "Radius of Cut: " << getRadius() << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << "\n"
              << std::endl;
}
