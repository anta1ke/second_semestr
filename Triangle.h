#pragma once
#include "Point.h"

class Triangle {
private:
    Point p1, p2, p3;
    double sideA, sideB, sideC;

    void calculateSides() const;  // ← добавил const

public:
    Triangle(const Point& point1, const Point& point2, const Point& point3);
    
    double getPerimeter() const;
    double getArea() const;
    double getInscribedRadius() const;
    double getCircumscribedRadius() const;
};
