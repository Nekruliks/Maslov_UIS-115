#pragma once
using namespace std;
#include <iostream>
class Pair
{
protected:
	double a;
	double b;
public:
	/**
	 \brief	Конструктор по умолчанию
	 */
	Pair();
	/**
	 \brief	Конструктор принимающий числа a и b
	 */
	explicit Pair(const double a, const double b);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Pair() = default;
	/**
	 \brief	Конструктор копирования
	 */
	Pair(const  Pair&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	Pair& operator=(const  Pair&) = default;
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, const Pair& pr);
	/**
	 \brief	Возвращает a
	 \returns	a.
	 */
	double get_a()const;
	/**
	 \brief	Возвращает b
	 \returns	b.
	 */
	double get_b()const;
	/**
	 \brief	Возвращает произведение a и b
	 \returns	a * b.
	 */
	double get_composition()const;
	/**
	 \brief	Изменяет число a
	 */
	void set_a(const double change_a);
	/**
	 \brief	Изменяет число b
	 */
	void set_b(const double change_b);
};