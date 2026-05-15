#pragma once
#include "Point.h"

/**
 * @brief Класс треугольника, заданного тремя точками
 */
class Triangle {
private:
    Point p1, p2, p3;   ///< Три вершины треугольника
    double sideA;        ///< Сторона BC (напротив p1)
    double sideB;        ///< Сторона AC (напротив p2)
    double sideC;        ///< Сторона AB (напротив p3)

    /**
     * @brief Вычисляет длину стороны между двумя точками
     */
    double calculateSide(const Point& a, const Point& b) const;

public:
    /**
     * @brief Конструктор треугольника
     * @param p1, p2, p3 - три вершины
     */
    Triangle(const Point& p1, const Point& p2, const Point& p3);

    double getPerimeter() const;
    double getArea() const;
    double getInscribedRadius() const;
    double getCircumscribedRadius() const;
};
