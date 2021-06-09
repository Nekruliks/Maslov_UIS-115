#pragma once
#include "Pair.h"
using namespace std;
class Rectangle : public Pair
{
private:
	/**
	 \brief	Сеттер принимающий длины сторон и проверяющий их на отрицательность
	 */
	void set_sides(const double a, const double b);
public:
	/**
	 \brief	Конструктор принимающий числа длину и ширину
	 */
	explicit Rectangle(const double width, const double height);
	/**
	\brief	Деструктор по умолчанию
	*/
	~Rectangle() = default;
	/**
	 \brief	Конструктор копирования
	 */
	Rectangle(const  Rectangle&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	Rectangle& operator=(const  Rectangle&) = default;
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, const Rectangle& rect);
	/**
	 \brief	Возвращает площадь
	 */
	double get_area()const;
	/**
	 \brief	Возвращает периметр
	 */
	double get_perimeter()const;
};