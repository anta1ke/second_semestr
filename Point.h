#pragma once

/**
 * @brief Класс "Точка на плоскости"
 */
class Point {
private:
    double x;
    double y;

public:
    /**
     * @brief Конструктор точки
     * @param x координата X
     * @param y координата Y
     */
    Point(double x = 0, double y = 0);
    
    /**
     * @brief Получить координату X
     * @return координата X
     */
    double getX() const;
    
    /**
     * @brief Получить координату Y
     * @return координата Y
     */
    double getY() const;
    
    /**
     * @brief Расстояние до другой точки
     * @param other другая точка
     * @return расстояние между точками
     */
    double distanceTo(const Point& other) const;
};
