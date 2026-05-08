#include "Polygon.h"
#include <iostream>

int main()
{
    std::cout << "=== Polygon Program ===" << std::endl;
    
    // Демонстрация создания многоугольника через вектор точек
    std::cout << "\n--- Creating polygon from points ---" << std::endl;
    std::vector<Point> points;
    points.push_back(Point(0, 0));
    points.push_back(Point(100, 0));
    points.push_back(Point(100, 100));
    points.push_back(Point(0, 100));
    
    Polygon square(points);
    std::cout << square << std::endl;
    
    // Демонстрация создания многоугольника через массив чисел
    std::cout << "\n--- Creating polygon from array ---" << std::endl;
    unsigned int coords[] = {50, 50, 150, 50, 150, 150, 50, 150};
    Polygon rectangle(coords, 4);
    std::cout << rectangle << std::endl;
    
    // Демонстрация работы оператора ввода
    std::cout << "\n--- Input polygon ---" << std::endl;
    std::cout << "Enter polygon (numVertices x1 y1 x2 y2 ...): ";
    Polygon p = Polygon::Read(std::cin);
    std::cout << "You entered: " << p << std::endl;
    
    return 0;
}
