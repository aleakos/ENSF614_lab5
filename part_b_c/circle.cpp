//michael branch

#include <iostream>
#include <iomanip>
#include "circle.h"

void Circle::display()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Square Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getXCoord() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getYCoord() << std::endl;
    std::cout << "Radius: " << getRadius() << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << "\n"
              << std::endl;
}
