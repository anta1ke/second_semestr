#include "Point.h"
#include <sstream>
#include <stdexcept>

Point::Point(const int x, const int y)
    : x(x), y(y)
{
}

std::string Point::ToString() const
{
    std::ostringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}

int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << p.ToString();
    return os;
}

std::istream& operator>>(std::istream& is, Point& p)
{
    is >> p.x >> p.y;
    return is;
}

bool Point::operator<(const Point& other) const
{
    return x < other.x || (x == other.x && y < other.y);
}

bool Point::operator==(const Point& other) const
{
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
}
