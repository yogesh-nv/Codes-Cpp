// Sum of digits
#include <iostream>
using namespace std;
int sumDigit(int n, int sum)
{
	if (n == 0)
		return sum;
	sum += (n % 10);
	return sumDigit(n / 10, sum);
}
int main()
{
	cout << "enter a number ";
	int n;
	cin >> n;
	cout << "sum=" << sumDigit(n, 0);
	return 0;
}