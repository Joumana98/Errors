#include "std_lib_facilites.h"

using namespace std;

class bad_Argument {};

double ctok(double c) // converts Celsius to Kelvin
{

	if (c < -273.15)
		throw bad_Argument{};
	double k = c + 273.15;
	return k;
}

double ktoc(double c) // converts Kelvin to Celsius
{

	if (c < 0)
		throw bad_Argument{};
	double k = c - 273.15;
	return k;
}
int main()
try {
	char u;
	double c = 0; // declare input variable
	cout << "Enter temperture :" << endl;
	cin >> c; // retrieve temperature to input variable
	cout << "Enter the unit (c for Celsius or k for Kelvin): " << endl;
	cin >> u;

	double k;
	switch (u)
	{
	case 'c':
	case 'C':
		k = ctok(c); // convert temperature
		break;
	case 'k':
	case 'K':
		k = ktoc(c); // convert temperature
		break;
	default:
		cout << "Wrong unit!!" << endl;

	}

	cout << k << '/n'; // print out temperature

	return 0;
}
catch (bad_Argument)
{
	cout << "Bad Argument!!" << endl;
	return 1;
}