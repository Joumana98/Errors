// Exercise 5

#include "std_lib_facilites.h"

using namespace std;

double ftoc(double f) // converts Celsius to  Fahrenheit
{
	double c = (f - 32.0) / (9.0 / 5);
	return c;
}

double ctof(double c) // converts  Fahrenheit to Celsius
{
	double  f = 32.0 + (9.0 / 5) * c;
	cout << f << endl;
	return f;
}
int main()
{
	char u;
	double t = 0; // declare input variable
	cout << "Enter temperture :" << endl;
	cin >> t; // retrieve temperature to input variable
	cout << "Enter the unit (c for Celsius or f for Fahrenheit): " << endl;
	cin >> u;

	double f = 0;
	switch (u)
	{
	case 'c':
	case 'C':
		f = ctof(t); // convert temperature
		break;
	case 'f':
	case 'F':
		f = ftoc(t); // convert temperature
		break;
	default:
		cout << "Wrong unit!!" << endl;

	}

	cout << f << endl; // print out temperature

	return 0;
}