#pragma once

/**
* @brief Класс "Треугольник, заданный тремя точками"
 */
class Triangle {
private:
    /**
     * @brief Координаты первой точки
     */
    double x1, y1;
    /**
     * @brief Координаты второй точки
     */
    double x2, y2;
    /**
     * @brief Координаты третьей точки
     */
    double x3, y3;
    
    /**
     * @brief Длины сторон треугольника
     */
    double sideA, sideB, sideC;

    /**
     * @brief Расчёт длины стороны между двумя точками
     * @param x1,y1 координаты первой точки
     * @param x2,y2 координаты второй точки
     * @return длина стороны
     */
    double calculateSide(double x1, double y1, double x2, double y2) const;

public:
    /**
     * @brief Конструктор
     * @param x1,y1 координаты первой точки
     * @param x2,y2 координаты второй точки
     * @param x3,y3 координаты третьей точки
     */
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

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
