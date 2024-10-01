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
		if (digit < 8 && digit >= 0)
		{
			decimal += digit * pow(8, i);
			num /= 10;
			i++;
		}
		else
		{
			cout << "not valid octal number" << endl;
			exit(0);
		}
	}
	cout << decimal << endl;
	return 0;
}
