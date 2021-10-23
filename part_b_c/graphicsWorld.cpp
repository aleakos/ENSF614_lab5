#include <iostream>
#include "graphicsWorld.h"

void GraphicsWorld::run()
{
#if 1

    std::cout << "Testing Points......\n"
              << std::endl;
    Point a(4.0, 4.0);
    std::cout << "Creating Point A at (4,4)..."
              << "\n"
              << std::endl;
    a.display();
    std::cout << "Change A to (6,4)"
              << "\n"
              << std::endl;
    a.setXCoord(6);
    a.display();

    std::cout << "Change A to (6,9)"
              << "\n"
              << std::endl;
    a.setYCoord(9);
    a.display();

    std::cout << "Checking ID of A starting at 1000: " << a.getPointID() << "\n"
              << std::endl;

    std::cout << "Creating Point B at (10,3)..."
              << "\n"
              << std::endl;
    Point b(10.0, 3.0);
    b.display();
    std::cout << "Checking ID of B: " << b.getPointID() << "\n"
              << std::endl;

    std::cout << "Checking Point Counter: " << Point::counter() << "\n"
              << std::endl;

    std::cout << "Distance from A to B (Non Static): " << a.distance(b) << "\n"
              << std::endl;
    std::cout << "Distance from A to B (Static): " << Point::distance(a, b) << "\n"
              << std::endl;

#endif
#if 1

    std::cout << "\nTesting Shapes......\n"
              << std::endl;

    std::cout << "Creating Shape A at (4,8)...\n"
              << std::endl;
    Shape shapeA = Shape(4, 8, "SHAPE A");
    std::cout << "Moving by (2,1) to (6,9) ...\n"
              << std::endl;
    shapeA.move(2, 1);
    shapeA.display();
    std::cout << "Creating Shape B at (10,3)...\n"
              << std::endl;
    Shape shapeB = Shape(10, 3, "SHAPE B");

    std::cout << "Distance from Square A to Square B (Non Static): " << shapeA.distance(shapeB) << "\n"
              << std::endl;
    std::cout << "Distance from Square A to Square B (Static): " << Shape::distance(shapeA, shapeB) << "\n"
              << std::endl;
#endif
#if 1

    std::cout << "\nTesting Squares......\n"
              << std::endl;

    std::cout << "Creating Square A at (6,9) side length of 25"
              << "\n"
              << std::endl;
    Square squareA = Square(6, 9, 25, "Square A");
    std::cout << "Changing Square A's side length to 20.5 ..."
              << "\n"
              << std::endl;
    squareA.setSideA(20.5);
    squareA.display();
    std::cout << "Distance from Square A to Shape B: " << squareA.distance(shapeB) << "\n"
              << std::endl;
#endif
#if 1
    std::cout << "\nTesting Rectangles......\n"
              << std::endl;
    std::cout << "Creating 'Rectangle A' at (6,9) side length A of 25 and B of 25"
              << "\n"
              << std::endl;
    Rectangle rectangleA = Rectangle(6, 9, 25, 25, "Rectangle A");
    std::cout << "Changing 'Rectangle A' side B length to 10 ..."
              << "\n"
              << std::endl;
    rectangleA.setSideB(10);
    rectangleA.display();
    std::cout << "Distance from 'Rectangle A' to Shape B: " << rectangleA.distance(shapeB) << "\n"
              << std::endl;

    std::cout << "Testing Copying..... \n"
              << std::endl;

    std::cout << "Creating 'Copy Rect' at (6,9) side length A of 25 and B of 25"
              << "\n"
              << std::endl;
    Rectangle copyRect = Rectangle(10, 3, 10, 2, "Copy Rect");
    copyRect.display();

    std::cout << "Copying Rectangel A into Copy Rect....\n"
              << std::endl;
    copyRect = rectangleA;

    std::cout << "Change side length of copy of Rectangle A to 20 and 30....\n"
              << std::endl;
    copyRect.setSideA(20);
    copyRect.setSideB(30);
    copyRect.display();
    std::cout << "Show original Rectangle A side lengths shoud be 25 and 10....\n"
              << std::endl;
    rectangleA.display();

#endif

#if 1
    std::cout
        << "\nTesting array of pointers and polymorphism:\n"
        << std::endl;
    Shape *sh[4];
    sh[0] = &squareA;
    sh[1] = &rectangleA;
    sh[2] = &shapeA;
    sh[3] = &copyRect;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
#endif

#if 0
    std::cout << "\nTesting Functions in class Circle:\n"
              << std::endl;
    Circle c(3, 5, 9, "CIRCLE C");
    c.display();
    std::cout << "the area of " << c.getName() << " is: " << c.area() << std::endl;
    std::cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << std::endl;
    std::cout << "\nThe distance between rectangle a and circle c is: "
              << "\n"
              << shapeA.distance(c);
    CurveCut rc(6, 5, 10, 12, 9, "CurveCut rc");
    rc.display();
    std::cout << "the area of " << rc->Rectangle::getName() << " is: " << rc.area();
    std::cout << "the perimeter of " << rc.getName() << " is: " << rc.perimeter();
    d = rc.distance(c);
    std::cout << "\nThe distance between rc and c is: " << d;
#endif
}
