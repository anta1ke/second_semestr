#include "Polygon.h"
#include <sstream>
#include <stdexcept>

Polygon::Polygon(const std::vector<Point>& vertices)
    : vertices(vertices)
{
    if (vertices.size() < 3)
        throw std::invalid_argument("Polygon must have at least 3 vertices.");
}

Polygon::Polygon(const int* coords, const size_t numVertices)
{
    if (numVertices < 3)
        throw std::invalid_argument("Polygon must have at least 3 vertices.");

    for (size_t i = 0; i < numVertices; ++i)
    {
        vertices.push_back(Point(coords[2 * i], coords[2 * i + 1]));
    }
}

std::string Polygon::ToString() const
{
    std::ostringstream ss;
    ss << "Polygon: ";
    for (size_t i = 0; i < vertices.size(); ++i)
    {
        if (i > 0)
            ss << ", ";
        ss << vertices[i].ToString();
    }
    return ss.str();
}

Polygon Polygon::Read(std::istream& is)
{
    size_t numVertices;
    is >> numVertices;

    std::vector<Point> vertices;
    for (size_t i = 0; i < numVertices; ++i)
    {
        Point p;
        is >> p;
        vertices.push_back(p);
    }
    return Polygon(vertices);
}

std::ostream& operator<<(std::ostream& os, const Polygon& p)
{
    os << p.ToString();
    return os;
}
