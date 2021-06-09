#include "Cursor.h"

void Cursor::set_correct_size(const double size)
{
	if (size >= MIN_SIZE && size <= MAX_SIZE)
	{
		this->size = size;
	}
	else
	{
		throw invalid_argument("¬еличина не соответсвует правильному значению.");
	}
}
void Cursor::set_correct_x(const unsigned int x)
{
	if (x <= DISPLAY_X)
	{
		this->x = x;
	}
	else
	{
		throw invalid_argument(" оордината x не соответсвует правильному значению.");
	}
}
void Cursor::set_correct_y(const unsigned int y)
{
	if (y <= DISPLAY_Y)
	{
		this->y = y;
	}
	else
	{
		throw invalid_argument(" оордината y не соответсвует правильному значению.");
	}
}
void Cursor::set_x(const unsigned int x)
{
	set_correct_x(x);
}
void Cursor::set_y(const unsigned int y)
{
	set_correct_x(y);
}
void Cursor::set_type(const string& type)
{
	this->type = type;
}
void Cursor::set_size(double size)
{
	set_correct_size(size);
}
void Cursor::set_visibility(const bool visibility)
{
	this->visibility = visibility;
}
Cursor::Cursor(const unsigned int x, const unsigned int y, const string& type, const double size, const bool visibility)
{
	set_correct_x(x);
	set_correct_y(y);
	this->type = type;
	set_correct_size(size);
	this->visibility = visibility;
}
unsigned int Cursor::get_x()const
{
	return x;
}
unsigned int Cursor::get_y()const
{
	return y;
}
string Cursor::get_type()const
{
	return type;
}
double Cursor::get_size() const
{
	return size;
}
bool Cursor::is_cursor_visibility()const
{
	if (visibility)
	{
		return true;
	}
	return false;
}
ostream& operator<<(ostream& out, const Cursor& cur)
{
	out << "x = " << cur.get_x() << endl;
	out << "y = " << cur.get_y() << endl;
	out << "size = " << cur.get_size() << endl;
	out << "type: " << cur.get_type() << endl;
	if (cur.is_cursor_visibility())
	{
		out << "Curor is vivibility" << endl;
	}
	else
	{
		out << "Curor is not vivibility" << endl;
	}
	return out;
}