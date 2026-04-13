#include <iostream>
#include "Triangle.h"

/**
 * @brief Считывает координату точки с клавиатуры
 * @param reports - строка информации
 * @return считанное значение
 * @note При ошибке ввода программа завершается
 */
double getCoordinate(const std::string reports = "");

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main() {
    std::cout << "Введите координаты трёх точек:" << std::endl;
    
    double x1 = getCoordinate("Введите x1:");
    double y1 = getCoordinate("Введите y1:");
    double x2 = getCoordinate("Введите x2:");
    double y2 = getCoordinate("Введите y2:");
    double x3 = getCoordinate("Введите x3:");
    double y3 = getCoordinate("Введите y3:");
    
    Triangle triangle(x1, y1, x2, y2, x3, y3);
    
    std::cout << "Периметр: " << triangle.getPerimeter() << std::endl;
    std::cout << "Площадь: " << triangle.getArea() << std::endl;
    std::cout << "Радиус вписанной окружности: " << triangle.getInscribedRadius() << std::endl;
    std::cout << "Радиус описанной окружности: " << triangle.getCircumscribedRadius() << std::endl;
    
    return 0;
}

double getCoordinate(const std::string report) {
    std::cout << report << std::endl;
    double value = 0;
    std::cin >> value;
    if (std::cin.fail()) {
        std::cout << "Ошибка. Вы должны вводить только числа." << std::endl;
        exit(1);
    }
    return value;
}
