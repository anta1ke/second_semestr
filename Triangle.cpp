#include <iostream>
#include <cmath>
#include "Triangle.h"

double Triangle::calculateSide(double x1, double y1, double x2, double y2) const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    this->x1 = x1; this->y1 = y1;
    this->x2 = x2; this->y2 = y2;
    this->x3 = x3; this->y3 = y3;
    
    sideA = calculateSide(x2, y2, x3, y3);
    sideB = calculateSide(x1, y1, x3, y3);
    sideC = calculateSide(x1, y1, x2, y2);
    
    // Проверка на вырожденный треугольник (точки на одной прямой)
    double area = getArea();
    if (area <= 0.000001) {
        std::cout << "Error. Points are collinear, triangle does not exist." << std::endl;
        exit(1);
    }
}

double Triangle::getPerimeter() const {
    return sideA + sideB + sideC;
}

double Triangle::getArea() const {
    // Формула Герона
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
