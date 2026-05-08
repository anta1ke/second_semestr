#pragma once
#include <string>

/**
 * @brief Абстрактный базовый класс Фигура.
 */
class Figure
{
public:
    /**
     * @brief Сериализация объекта в строку.
     * @return Строковое представление объекта.
     */
    virtual std::string ToString() const = 0;

    /**
     * @brief Виртуальный деструктор.
     */
    virtual ~Figure() = default;
};
