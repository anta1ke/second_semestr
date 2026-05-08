#pragma once
#include "Point.h"

/**
 * @brief Класс "Треугольник, заданный тремя точками"
 */
class Triangle {
private:
    Point p1, p2, p3;
    double sideA, sideB, sideC;

    /**
     * @brief Расчёт длин сторон треугольника
     */
    void calculateSides();

public:
    /**
     * @brief Конструктор
     * @param point1 первая точка
     * @param point2 вторая точка
     * @param point3 третья точка
     */
    Triangle(const Point& point1, const Point& point2, const Point& point3);

    /**
     * @brief Расчёт периметра треугольника
     * @return Рассчитанное значение
     */
    double getPerimeter() const;
    
    /**
     * @brief Расчёт площади треугольника (формула Герона)
     * @return Рассчитанное значение
     */
    double getArea() const;
    
    /**
     * @brief Расчёт радиуса вписанной окружности
     * @return Рассчитанное значение
     * @note r = 2S / P, где S - площадь, P - периметр
     */
    double getInscribedRadius() const;
    
    /**
     * @brief Расчёт радиуса описанной окружности
     * @return Рассчитанное значение
     * @note R = (a * b * c) / (4 * S), где a,b,c - стороны, S - площадь
     */
    double getCircumscribedRadius() const;
};
