#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int a, b;

public:
    Point(int, int);
    void displayPoint();
    friend void dispDistance(Point, Point);
};

Point::Point(int x, int y)
{
    a = x;
    b = y;
}

void Point::displayPoint()
{
    cout << "The point is (" << a << " , " << b << ")" << endl;
}

void dispDistance(Point e, Point f)
{
    float dis = (e.b - f.b) * (e.b - f.b) - (e.a - f.a) * (e.a - f.a);
    dis = sqrt(dis);
    cout << "The distance between the points is " << dis << endl;
}

int main()
{
    Point p(2, -2);
    p.displayPoint();

    Point q(4, 5);
    q.displayPoint();

    dispDistance(p, q);
    return 0;
}