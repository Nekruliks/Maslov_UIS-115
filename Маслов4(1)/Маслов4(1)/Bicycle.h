#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
private:
	/**
	 \brief	функция принимает количество пассажиров
	 */
	void set_number_of_passengers(const int number_of_passengers) override;
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Bicycle(const double average_speed, const string& model, const int number_of_passengers, const double distance);
	/**
	 \brief	Деструктор
	 */
	virtual ~Bicycle();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Bicycle& bc);
	/**
	 \brief	функция принимает новое расстояние
	 */
	void set_new_distance(const double distance) override;
};