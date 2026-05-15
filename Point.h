#pragma once

/**
 * @brief Класс, представляющий точку на плоскости
 */
class Point {
public:
    double x; ///< Координата X
    double y; ///< Координата Y

    /**
     * @brief Конструктор точки
     * @param x - координата X (по умолчанию 0)
     * @param y - координата Y (по умолчанию 0)
     */
    Point(double x = 0, double y = 0) : x(x), y(y) {}
};
