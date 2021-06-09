#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cursor
{
private:
	const int DISPLAY_X = 1920;
	const int DISPLAY_Y = 1080;
	const double MAX_SIZE = 15.0;
	const double MIN_SIZE = 1.0;
	unsigned int x;
	unsigned int y;
	string type;
	double size;
	bool visibility;
	void set_correct_size(const double size);
	void set_correct_x(const unsigned int x);
	void set_correct_y(const unsigned int y);
public:
	/**
	 \brief	Конструктор с параметрами.
	 */
	explicit Cursor(const unsigned int x, const unsigned int y, const string& type, const double size, const bool visibility);
	/**
	 \brief	Деструктор по умолчанию.
	 */
	~Cursor() = default;
	/**
	 \brief	Конструктор копирования по умолчанию.
	 */
	Cursor(const  Cursor&) = default;
	/**
	 \brief	Конструктор присваивания по умолчанию.
	 */
	Cursor& operator=(const  Cursor&) = default;
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, const Cursor& cur);
	/**
	 \brief	Изменяет координату x
	 */
	void set_x(const unsigned int x);
	/**
	 \brief	Изменяет координату y
	 */
	void set_y(const unsigned int y);
	/**
	 \brief	Изменяет вид курсора
	 */
	void set_type(const string& type);
	/**
	 \brief	Изменяет видимость курсора
	 */
	void set_visibility(const bool visibility);
	/**
	 \brief	Изменяет размер курсора
	 */
	void set_size(double size);
	/**
	 \brief	Получает координату x
	 */
	unsigned int get_x()const;
	/**
	 \brief	Получает координату y
	 */
	unsigned int get_y()const;
	/**
	 \brief	Получает вид курсора
	 */
	string get_type()const;
	/**
	 \brief	Получает размер курсора
	 */
	double get_size()const;
	/**
	 \brief	Получает видимость курсора
	 */
	bool is_cursor_visibility()const;
};

