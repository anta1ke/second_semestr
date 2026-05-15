#include <iostream>
#include "Triangle.h"

/**
 * @brief Считывает координату с клавиатуры
 * @param report - подсказка для пользователя
 */
double getCoordinate(const std::string& report = "");

int main() {
    std::cout << "Введите координаты трёх точек:" << std::endl;

    Point p1(getCoordinate("Введите x1:"), getCoordinate("Введите y1:"));
    Point p2(getCoordinate("Введите x2:"), getCoordinate("Введите y2:"));
    Point p3(getCoordinate("Введите x3:"), getCoordinate("Введите y3:"));

    Triangle triangle(p1, p2, p3);

    std::cout << "Периметр: "                    << triangle.getPerimeter()           << std::endl;
    std::cout << "Площадь: "                     << triangle.getArea()                << std::endl;
    std::cout << "Радиус вписанной окружности: "  << triangle.getInscribedRadius()     << std::endl;
    std::cout << "Радиус описанной окружности: "  << triangle.getCircumscribedRadius() << std::endl;

    return 0;
}

double getCoordinate(const std::string& report) {
    std::cout << report << std::endl;
    double value = 0;
    std::cin >> value;
    if (std::cin.fail()) {
        std::cout << "Ошибка. Вы должны вводить только числа." << std::endl;
        exit(1);
    }
    return value;
}
