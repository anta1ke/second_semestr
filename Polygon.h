#pragma once
#include "Figure.h"
#include "Point.h"
#include <vector>

/**
 * @brief Класс Многоугольник.
 *
 * Хранит вершины многоугольника.
 */
class Polygon : public Figure
{
private:
    /**
     * @brief vertices - вершины многоугольника
     */
    std::vector<Point> vertices;

public:
    /**
     * @brief Конструктор класса Polygon через вектор точек.
     * @param vertices Вершины многоугольника
     * @throws std::invalid_argument Если количество вершин меньше 3
     */
    Polygon(const std::vector<Point>& vertices);

    /**
     * @brief Конструктор класса Polygon через массив чисел.
     * @param coords Массив координат (x1, y1, x2, y2, ...)
     * @param numVertices Количество вершин
     * @throws std::invalid_argument Если количество вершин меньше 3
     */
    Polygon(const int* coords, const size_t numVertices);

    /**
     * @brief Преобразует многоугольник в строку
     * @return Строковое описание многоугольника
     */
    std::string ToString() const override;

    /**
     * @brief Статический метод чтения объекта из потока
     * @param is Поток ввода
     * @return созданный объект Polygon
     */
    static Polygon Read(std::istream& is);

    /**
     * @brief Перегрузка оператора вывода
     * @param os поток вывода
     * @param p объект многоугольника
     * @return поток вывода
     */
    friend std::ostream& operator<<(std::ostream& os, const Polygon& p);
};
