#include "Polygon.h"
#include <cassert>
#include <iostream>

void TestPolygon()
{
    std::vector<Point> points;
    points.push_back(Point(0, 0));
    points.push_back(Point(10, 0));
    points.push_back(Point(10, 10));
    points.push_back(Point(0, 10));

    Polygon p(points);

    assert(p.ToString().length() > 0);
    std::cout << "Test passed: " << p << std::endl;
}

void TestPointOperators()
{
    Point p1(5, 10);
    Point p2(5, 10);
    Point p3(3, 8);

    assert(p1 == p2);
    assert(p1 != p3);
    assert(p3 < p1);

    Point p4 = p1 + 3;  // (8, 13)
    assert(p4.GetX() == 8 && p4.GetY() == 13);

    Point p5 = p1 - 2;  // (3, 8)
    assert(p5.GetX() == 3 && p5.GetY() == 8);

    std::cout << "Point operators test passed" << std::endl;
}

void TestPolygonConstructors()
{
    std::vector<Point> points;
    points.push_back(Point(0, 0));
    points.push_back(Point(5, 0));
    points.push_back(Point(5, 5));
    points.push_back(Point(0, 5));

    Polygon p1(points);
    assert(p1.ToString().length() > 0);

    unsigned int coords[] = {0, 0, 5, 0, 5, 5, 0, 5};
    Polygon p2(coords, 4);
    assert(p2.ToString().length() > 0);

    std::cout << "Constructor test passed" << std::endl;
}

void TestPolygonException()
{
    bool caught = false;
    try
    {
        std::vector<Point> points;
        points.push_back(Point(0, 0));
        points.push_back(Point(10, 0));
        Polygon p(points);  // только 2 вершины - должно выбросить исключение
    }
    catch (const std::invalid_argument& e)
    {
        caught = true;
        std::cout << "Exception caught (correct): " << e.what() << std::endl;
    }
    assert(caught);
}

void RunAllTests()
{
    std::cout << "=== Running tests ===" << std::endl;
    TestPointOperators();
    TestPolygonConstructors();
    TestPolygon();
    TestPolygonException();
    std::cout << "=== All tests passed! ===" << std::endl;
}
