#include <iostream>
#include "Point.h"
#include "Triangle.h"

/**
 * @brief Считывает координату с клавиатуры
 * @param reports - строка информации
 * @return считанное значение
 * @note При ошибке ввода программа завершается
 */
double getCoordinate(const std::string& reports);

/**
 * @brief Считывает точку с клавиатуры
 * @param name - название точки
 * @return считанная точка
 */
Point readPoint(const std::string& name);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main() {
    std::cout << "Введите координаты трёх точек:" << std::endl;
    
    Point p1 = readPoint("A");
    Point p2 = readPoint("B");
    Point p3 = readPoint("C");
    
    Triangle triangle(p1, p2, p3);
    
    std::cout << "Периметр: " << triangle.getPerimeter() << std::endl;
    std::cout << "Площадь: " << triangle.getArea() << std::endl;
    std::cout << "Радиус вписанной окружности: " << triangle.getInscribedRadius() << std::endl;
    std::cout << "Радиус описанной окружности: " << triangle.getCircumscribedRadius() << std::endl;
    
    return 0;
}

double getCoordinate(const std::string& report) {
    std::cout << report;
    double value = 0;
    std::cin >> value;
    if (std::cin.fail()) {
        std::cout << "Ошибка. Вы должны вводить только числа." << std::endl;
        exit(1);
    }
    return value;
}

Point readPoint(const std::string& name) {
    std::cout << "Точка " << name << ":" << std::endl;
    double x = getCoordinate("  x = ");
    double y = getCoordinate("  y = ");
    return Point(x, y);
}
