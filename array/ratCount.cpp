// https://prepinsta.com/accenture/coding/
/*Problem Description :
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:

Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.
Example:

Input:

r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2
Output:

4*/
#include <iostream>
using namespace std;
int ratCount(int r, int unit, int a[], int n)
{

	int sum = 0;
	if (n == 0)
		return -1;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (sum >= (r * unit))
			return i + 1;
	}

	return 0;
}
int main()
{
	int r, unit, n;
	cin >> r >> unit >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << ratCount(r, unit, a, n);
	return 0;
}