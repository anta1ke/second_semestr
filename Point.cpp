#include "Point.h"
#include <sstream>
#include <stdexcept>

Point::Point(const unsigned int x, const unsigned int y)
    : x(x), y(y)
{
}

std::string Point::ToString() const
{
    std::ostringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}

unsigned int Point::GetX() const
{
    return x;
}

unsigned int Point::GetY() const
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

Point Point::operator+(const unsigned int value) const
{
    return Point(x + value, y + value);
}

Point Point::operator-(const unsigned int value) const
{
    if (x < value || y < value)
        throw std::invalid_argument("Resulting coordinate would be negative.");
    return Point(x - value, y - value);
}
