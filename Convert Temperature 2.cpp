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
int main()
try {
	double c = 0; // declare input variable
	cout << "Enter temperture in degree Celsius :" << endl;
	cin >> c; // retrieve temperature to input variable
	double k = ctok(c); // convert temperature
	cout << k << '/n'; // print out temperature

	return 0;
}
catch (bad_Argument)
{
	cout << "Bad Argument!!" << endl;
	return 1;
}