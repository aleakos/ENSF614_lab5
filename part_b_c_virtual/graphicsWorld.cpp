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
#if 0

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
    std::cout << "Distance from Square A to Shape B: " << squareA.distance(squareA) << "\n"
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
    std::cout << "Distance from 'Rectangle A' to Shape B: " << rectangleA.distance(squareA) << "\n"
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
    sh[2] = &copyRect;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
#endif

#if 1
    std::cout << "\nTesting Functions in class Circle:\n"
              << std::endl;
    Circle circleA(3, 5, 9, "Circle A\n");
    std::cout << "Creating 'Circle A' at (3,5) with radius of 9. Area should be 254.47, circumference of 56.55"
              << "\n"
              << std::endl;
    circleA.display();
    // std::cout << "the area of " << circleA.getName() << " is: " << circleA.area() << std::endl;
    // std::cout << "the perimeter of " << circleA.getName() << " is: " << circleA.perimeter() << std::endl;
    std::cout << "\nThe distance between rectangle a and circle a is: "
              << rectangleA.distance(circleA)
              << "\n"
              << std::endl;
#endif

#if 1
    std::cout << "\nTesting Functions in Curve Cut:\n"
              << std::endl;
    std::cout << "Creating Curve Cut rc' at (6,5) with radius of sides of 10 x 12 and cut of 9\n"
              << "Area is 56.38 and new perimeter is 40.14\n"
              << std::endl;
    CurveCut carveA(6, 5, 10, 12, 9, "CurveCut A");
    carveA.display();
    std::cout << "\nThe distance between rc and Circle A is: " << carveA.distance(circleA) << "\n"
              << std::endl;
#endif

#if 1
    // Using array of Shape pointers:
    Shape *sh2[4];
    sh2[0] = &rectangleA;
    sh2[1] = &squareA;
    sh2[2] = &circleA;
    sh2[3] = &carveA;
    sh2[0]->display();
    sh2[1]->display();
    sh2[2]->display();
    sh2[3]->display();

    std::cout << "\nthe area of " << sh2[0]->getName() << " is: " << sh2[0]->area();
    std::cout << "\nthe perimeter of " << sh2[0]->getName() << " is: " << sh2[0]->perimeter();
    sh2[1]->display();
    std::cout << "\nthe area of " << sh2[1]->getName() << " is: " << sh2[1]->area();
    std::cout << "\nthe perimeter of " << sh2[0]->getName() << " is: " << sh2[1]->perimeter();
    sh2[2]->display();
    std::cout << "\nthe area of " << sh2[2]->getName() << " is: " << sh2[2]->area();
    std::cout << "\nthe circumference of " << sh2[2]->getName() << " is: " << sh2[2]->perimeter();
    sh2[3]->display();
    std::cout << "\nthe area of " << sh2[3]->getName() << " is: " << sh2[3]->area();
    std::cout << "\nthe perimeter of " << sh2[3]->getName() << " is: " << sh2[3]->perimeter();
    std::cout << "\nTesting copy constructor in class CurveCut...copying A into new B....should display same values as A\n"
              << std::endl;
    CurveCut carveB = carveA;
    carveB.display();
    std::cout << "\nMove B (Copy of A) to (8,10), setting radius to 8.8\n"
              << std::endl;
    carveB.move(2, 5);
    carveB.setRadius(8.8);
    carveB.display();
    std::cout << "\nPrint Original A\n"
              << std::endl;
    carveA.display();
    std::cout << "\nTesting assignment operator in class CurveCut.. building Curve Cut C with (2,5,100,12,9)\n"
              << std::endl;
    CurveCut carveC(2, 5, 100, 12, 9, "CurveCut C");
    carveC.display();
    std::cout << "\nAssigning C to B\n"
              << std::endl;
    carveC = carveB;
    carveC.display();

#endif
}
