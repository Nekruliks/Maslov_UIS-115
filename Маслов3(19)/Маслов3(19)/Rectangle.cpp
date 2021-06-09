#include<iostream>
#include "Rectangle.h"
using namespace std;
void Rectangle::set_sides(const double width, const double height)
{
	if (width > 0 && height > 0)
	{
		this->a = width;
		this->b = height;
	}
	else
	{
		throw invalid_argument{ "Стороны меньше нуля" };
	}
}
Rectangle::Rectangle(const double width, const double height)
{
	set_sides(width, height);
}
double Rectangle::get_area()const { return get_composition(); }
double Rectangle::get_perimeter()const
{
	return (get_b() * 2) + (get_a() * 2);
}
ostream& operator<<(ostream& out, const Rectangle& rect)
{
	out << "Perimeter = " << rect.get_perimeter() << endl;
	out << "Area = " << rect.get_area() << endl;
	return out;
}