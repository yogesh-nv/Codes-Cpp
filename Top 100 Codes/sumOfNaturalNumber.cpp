/*Method 1:for loop
Method 2:formula (n*(n+1))/2
Method 3:Recursive*/
#include <iostream>
using namespace std;
int sum(int num)
{
	if (num > 0)
	{
		return num + sum(num - 1); //
	}
}

int main()
{
	int n;
	cin >> n;
	cout << "sum of " << n << " natural number =" << sum(n);
	return 0;
}