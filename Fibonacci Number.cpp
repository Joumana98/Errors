// Exercise 11

#include "std_lib_facilites.h"

int main()
{
	int f1, f2;
	cout << "Enter the first two Fibonacci Numbers: " << endl;
	cin >> f1 >> f2;
	if (f1 > f2)
		error("Wrong Input!!");

	double preTemp = f1;
	double temp = f2;
	double fib = f1 + f2;
	cout << preTemp << " " << temp << " ";
	while (static_cast<int>(fib) == fib)
	{
		cout << fib << " ";
		preTemp = temp;
		temp = fib;
		fib = preTemp + temp;
	}

	cout << endl;
	cout << "The largest Fibonacci Number that fits into an integer is: " << temp << endl;

	return 0;
}