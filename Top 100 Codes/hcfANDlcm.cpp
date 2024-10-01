#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int product = a * b;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	cout << "\nHCF is" << a;
	cout << "\nLCM is " << product / a << endl;
	return 0;
}
