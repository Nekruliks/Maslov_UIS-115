#include "Distance.h"

double distance(const double x1, const double y1, const double x2, const double y2)
{
	return pow(pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 2), 0.5);
}
double distance2(const double x1, const double y1, const double x2, const double y2)
{
	if (x1 != x2 && y1 != y2)
	{
		return distance(x1, y1, x2, y2);
	}
	else
	{
		throw 1;
	}
}
double distance3(const double x1, const double y1, const double x2, const double y2)
{
	if (x1 != x2 && y1 != y2)
	{
		return distance(x1, y1, x2, y2);
	}
	else
	{
		throw invalid_argument{ "Error! Coordinates are equal to each other " };
	}
}
double distance4(const double x1, const double y1, const double x2, const double y2)
{
	if (x1 != x2 && y1 != y2)
	{
		return distance(x1, y1, x2, y2);
	}
	else
	{
		throw empty_class();
	}
}
double distance5(const double x1, const double y1, const double x2, const double y2)
{
	if (x1 != x2 && y1 != y2)
	{
		return distance(x1, y1, x2, y2);
	}
	else
	{
		throw independent_class("Error! Coordinates are equal to each other, independent class with function parameter fields");
	}
}
double distance6(const double x1, const double y1, const double x2, const double y2)
{
	if (x1 != x2 && y1 != y2)
	{
		return distance(x1, y1, x2, y2);
	}
	else
	{
		throw successor_class("Error! Coordinates are equal to each other, successor class");
	}
}
