#ifndef POINT
#define POINT

class Point
{
private:
    double xCoord;
    double yCoord;
    int pointID;
    static int idCount;

public:
    Point(double x, double y);
    double getXCoord() const { return xCoord; }
    double getYCoord() const { return yCoord; }
    static int counter();
    int getPointID() const { return pointID; }
    void setXCoord(double x) { xCoord = x; }
    void setYCoord(double y) { yCoord = y; }
    void display();
    static double distance(const Point &A, const Point &B);
    double distance(const Point &that);
};

#endif
