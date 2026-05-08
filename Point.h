#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс Точка.
 */
class Point
{
private:
    /**
     * @brief x - Абсцисса
     */
     int x;
    /**
     * @brief y - Ордината
     */
     int y;

public:
    /**
     * @brief конструктор класса Point
     * @param x абсцисса
     * @param y ордината
     */
    Point(const int x = 0, const int y = 0);

    /**
     * @brief Преобразует точку в строку
     * @return Строковое представление точки
     */
    std::string ToString() const;

    /**
     * @brief Геттер для x
     */
     int GetX() const;

    /**
     * @brief Геттер для y
     */
     int GetY() const;

    /**
     * @brief Перегрузка оператора вывода
     * @param os поток вывода
     * @param p точка
     * @return поток вывода
     */
    friend std::ostream& operator<<(std::ostream& os, const Point& p);

    /**
     * @brief Перегрузка оператора ввода
     * @param is поток ввода
     * @param p точка
     * @return поток ввода
     */
    friend std::istream& operator>>(std::istream& is, Point& p);

    /**
     * @brief оператор сравнения "меньше"
     * @param other другая точка
     * @return true если текущая точка меньше
     */
    bool operator<(const Point& other) const;

    /**
     * @brief оператор равенства
     * @param other другая точка
     * @return true если точки равны
     */
    bool operator==(const Point& other) const;

    /**
     * @brief оператор неравенства
     * @param other другая точка
     * @return true если точки не равны
     */
    bool operator!=(const Point& other) const;

    /**
     * @brief оператор сложения точки и целого числа
     * @param value целое число
     * @return новая точка
     */
    Point operator+(const unsigned int value) const;

    /**
     * @brief оператор вычитания точки и целого числа
     * @param value целое число
     * @return новая точка
     */
    Point operator-(const unsigned int value) const;
};
