#pragma once

class Point {
private:
    double x, y;

public:
    Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
    double distanceTo(const Point& other) const;
};
