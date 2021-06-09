#include "Truck.h"
using namespace std;
void Truck::set_number_of_passengers(const int number_of_passengers)
{
	if (number_of_passengers > 0 && number_of_passengers <= 3)
	{
		this->number_of_passengers = number_of_passengers;
	}
	else
	{
		throw invalid_argument("Passengers can be from 1 to 3");
	}
}
void Truck::set_carrying(const double carrying)
{
	if (carrying > MIN_CARRYING && carrying <= MAX_CARRYING)
	{
		this->carrying = carrying;
	}
	else
	{
		throw invalid_argument("Incorrect lifting capacity");
	}
}
Truck::Truck(const double average_speed, const string& model, const int number_of_passengers, const double distance, const double fuel, const double carrying)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
	set_fuel(fuel);
	set_carrying(carrying);
}
Truck::~Truck() {};
ostream& operator<<(ostream& out, Truck& tr)
{
	out << "Truck \n" << "Average speed = " << tr.get_average_speed() << endl;
	out << "Model: " << tr.get_model() << endl;
	out << "Number of passangers = " << tr.get_number_of_passengers() << endl;
	out << "Distance = " << tr.get_distance() << endl;
	out << "Fuel = " << tr.get_fuel() << endl;
	out << "Carrying = " << tr.get_carrying() << endl;
	out << "Travel time = " << tr.get_travel_time() << endl;
	return out;
}
double Truck::get_carrying()const
{
	return carrying;
}