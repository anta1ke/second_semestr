#include <cmath>
#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::distanceTo(const Point& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}
