#include <iostream>
#include <cmath>
#include "Triangle.h"

void Triangle::calculateSides() {
    sideA = p1.distanceTo(p2);
    sideB = p2.distanceTo(p3);
    sideC = p3.distanceTo(p1);
}

Triangle::Triangle(const Point& point1, const Point& point2, const Point& point3)
    : p1(point1), p2(point2), p3(point3) {
    calculateSides();
    
    double area = getArea();
    if (area <= 0.000001) {
        std::cout << "Ошибка. Точки лежат на одной прямой, треугольник не существует." << std::endl;
        exit(1);
    }
}

double Triangle::getPerimeter() const {
    return sideA + sideB + sideC;
}

double Triangle::getArea() const {
    double p = getPerimeter() / 2;
    return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
}

double Triangle::getInscribedRadius() const {
    double S = getArea();
    double P = getPerimeter();
    if (P == 0) return 0;
    return 2 * S / P;
}

double Triangle::getCircumscribedRadius() const {
    double S = getArea();
    if (S == 0) return 0;
    return (sideA * sideB * sideC) / (4 * S);
}
