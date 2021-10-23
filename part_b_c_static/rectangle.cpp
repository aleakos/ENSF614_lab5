#include <iostream>
#include <iomanip>

#include "rectangle.h"

void Rectangle::display()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Rectangle Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getXCoord() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getYCoord() << std::endl;
    std::cout << "Side a: " << getSideA() << std::endl;
    std::cout << "Side b: " << getSideB() << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << "\n"
              << std::endl;
}
