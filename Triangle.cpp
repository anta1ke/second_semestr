#include <iostream>
#include <cmath>
#include "Triangle.h"

double Triangle::calculateSide(const Point& a, const Point& b) const {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3)
    : p1(p1), p2(p2), p3(p3) {
    sideA = calculateSide(p2, p3);
    sideB = calculateSide(p1, p3);
    sideC = calculateSide(p1, p2);

    double area = getArea();
    if (area <= 0.000001) {
        std::cout << "Ошибка. Точки коллинеарны, треугольник не существует." << std::endl;
        exit(1);
    }
}

double Triangle::getPerimeter() const {
    return sideA + sideB + sideC;
}

double Triangle::getArea() const {
    double p = (sideA + sideB + sideC) / 2;
    return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
}

double Triangle::getInscribedRadius() const {
    return getArea() / (getPerimeter() / 2);
}

double Triangle::getCircumscribedRadius() const {
    return (sideA * sideB * sideC) / (4 * getArea());
}
