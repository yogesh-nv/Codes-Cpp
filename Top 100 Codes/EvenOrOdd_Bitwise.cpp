#include <iostream>
using namespace std;
bool isEven(int num)
{
	return (!(num & 1)); // ((num^1)==(n+1))
}

int main()
{
	int n;
	cin >> n;
	if (isEven(n))
	{
		cout << n << " is even number";
	}
	else
		cout << n << " is odd number";
	return 0;
}