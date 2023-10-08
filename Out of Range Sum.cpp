#include "std_lib_facilites.h"

using namespace std;

int main()
{
	int n;
	cout << "Please enter the number of values you want to sum: " << endl;
	cin >> n;

	vector <int> v;
	cout << "Please enter a set of integers. Stop the input by pressing \"|\" ." << endl;
	for (int temp; cin >> temp;)
		v.push_back(temp);

	if (n > v.size())
		error("Out of range!");

	double sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + v[i];

	if (static_cast<int> (sum) != sum)
		error("The sum of the entered numbers cannot be represented as an integer.");

	cout << "The sum of the first " << n << " integers is: " << sum << endl;

	return 0;
}