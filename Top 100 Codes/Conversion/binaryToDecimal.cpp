#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num, i, decimal, digit;
	i = decimal = 0;
	cout << "enter the number\n";
	cin >> num;
	while (num != 0)
	{
		digit = num % 10;
		if (digit == 0 || digit == 1)
		{
			decimal += digit * pow(2, i);
			num /= 10;
			i++;
		}
		else
		{
			cout << "not valid binary number" << endl;
			exit(0);
		}
	}
	cout << decimal << endl;
	return 0;
}
