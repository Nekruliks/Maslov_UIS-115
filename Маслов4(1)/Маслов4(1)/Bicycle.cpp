#include "Bicycle.h";
using namespace std;
void Bicycle::set_number_of_passengers(const int number_of_passengers)
{
	if (number_of_passengers == 1)
	{
		this->number_of_passengers = number_of_passengers;
	}
	else
	{
		throw invalid_argument("There must be one cyclist");
	}
}
Bicycle::Bicycle(const double average_speed, const string& model, const int number_of_passengers, const double distance)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
}
Bicycle::~Bicycle() {};
ostream& operator<<(ostream& out, Bicycle& bc)
{
	out << "Bicycle \n" << "Average speed = " << bc.get_average_speed() << endl;
	out << "Model: " << bc.get_model() << endl;
	out << "Number of passangers = " << bc.get_number_of_passengers() << endl;
	out << "Distance = " << bc.get_distance() << endl;
	out << "Travel time = " << bc.get_travel_time() << endl;
	return out;
}
void Bicycle::set_new_distance(const double distance)
{
	set_distance(distance);
}
