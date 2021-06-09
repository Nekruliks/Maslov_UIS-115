#include "Bicycle.h"
#include "Car.h"
#include "Truck.h"

int main()
{
	Car car(50, "HONDA", 3, 500, 50);
	cout << car << endl;
	Truck tr(80, "KAMAZZZZZ", 2, 1000, 100, 500);
	cout << tr << endl;
}