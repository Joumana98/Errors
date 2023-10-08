// Exercise 6

#include "std_lib_facilites.h"

using namespace std;

class Imaginary_roots {};
void roots(int a, int b, int c);

int main()
try {
	int a, b, c;
	cout << "Enter th coefficients of the quadratic equation: " << endl;
	cin >> a >> b >> c;

	roots(a, b, c);


	return 0;
}
catch (Imaginary_roots)
{
	cout << "This equation have imaginary roots!!" << endl;
	return 1;
}

void roots(int a, int b, int c)
{
	double delta = pow(b, 2) - 4 * a * c;
	if (delta < 0)
		throw Imaginary_roots{};
	cout << "The first root is: " << (-b - sqrt(delta)) / 2 * a << endl;
	cout << "The second root is: " << (-b + sqrt(delta)) / 2 * a << endl;

}