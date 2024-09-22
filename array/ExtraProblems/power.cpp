// only when number is integer

#include <iostream>
using namespace std;

double power(double base, int exp)
{
	if (exp > 0)
		return (power(base, exp - 1) * base);
	else if (exp < 0)
		return (power(base, exp + 1) / base);
	else
		return 1;
}

int main()
{
	double base = 1.5;
	int expo = -2;
//	double res = 1.0;

	cout << "Result = " << power(base, expo);

	return 0;
}

// Only works when exponent is positive integer

/*
#include<iostream>
using namespace std;

int main()
{
	double base = 1.5;

	int expo = 2;
	double res = 1.0;

	while (expo != 0) {
		res *= base;
		expo--;
	}

	cout << "Result = " << res;

	return 0;
}
*/
