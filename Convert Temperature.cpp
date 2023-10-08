#include "std_lib_facilites.h"

using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
	double k = c + 273.15;
	return k;
}
int main()
{
	double c = 0; // declare input variable
	cout << "Enter temperture in degree Celsius :" << endl;
	cin >> c; // retrieve temperature to input variable

	if (c < -273.15)
		error("Wrong temperature!!");


	double k = ctok(c); // convert temperature
	cout << k << '/n'; // print out temperature

	return 0;
}