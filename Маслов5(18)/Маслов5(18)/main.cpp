#include "Distance.h"

int main()
{
	cout << distance(1, 2, 7, 4) << endl;
	try
	{
		cout << distance2(1, 2, 7, 2) << endl;
		cout << distance3(1, 2, 1, 4) << endl;
		cout << distance4(1, 1, 1, 1) << endl;
		cout << distance5(0, 2, 0, 4) << endl;
		cout << distance6(5, 7, 3, 7) << endl;
	}
	catch (int) {
		cout << "Error! Coordinates are equal to each other, throw specifier" << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}
	catch (empty_class) {
		cout << "Error! Coordinates are equal to each other, empty class" << endl;
	}
	catch (independent_class error) {
		cerr << error.message << endl;
	}
	catch (successor_class error) {
		cerr << error.what() << endl;
	}
}