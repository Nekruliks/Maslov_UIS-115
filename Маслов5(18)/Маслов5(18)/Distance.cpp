#include "Distance.h"
#include <cmath>
bool set_equal(const double x1, const double y1, const double x2, const double y2)
{
	if ((fabs(x1 - x2) < numeric_limits<double>::epsilon()) || (fabs(y1 - y2) < numeric_limits<double>::epsilon()))
	{
		return true;
	}
	else
	{
		return false;
	}
}
double distance(const double x1, const double y1, const double x2, const double y2)
{
	return pow(pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 2), 0.5);
}
double distance2(const double x1, const double y1, const double x2, const double y2)
{
	if (set_equal(x1,y1,x2,y2))
	{
		throw invalid_argument{ "Error! Coordinates are equal to each other " };
	}
	return distance(x1, y1, x2, y2);
}
double distance3(const double x1, const double y1, const double x2, const double y2)
{
	if (set_equal(x1, y1, x2, y2))
	{
		throw invalid_argument{ "Error! Coordinates are equal to each other " };
	}
	return distance(x1, y1, x2, y2);
}
double distance4(const double x1, const double y1, const double x2, const double y2)
{
	if (set_equal(x1, y1, x2, y2))
	{
		throw empty_class();
	}
	return distance(x1, y1, x2, y2);
}
double distance5(const double x1, const double y1, const double x2, const double y2)
{
	if (set_equal(x1, y1, x2, y2))
	{
		throw independent_class("Error! Coordinates are equal to each other, independent class with function parameter fields");
	}
	return distance(x1, y1, x2, y2);
}
double distance6(const double x1, const double y1, const double x2, const double y2)
{
	if (set_equal(x1, y1, x2, y2))
	{
		throw successor_class("Error! Coordinates are equal to each other, successor class");
	}
	return distance(x1, y1, x2, y2);
}
