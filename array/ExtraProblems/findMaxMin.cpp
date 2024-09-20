// find max and min value in array
#include <iostream>
using namespace std;
void findMinMax(int a[], int n)
{
	int min = a[0];
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
			max = a[i];
	}
	cout << "min=" << min << endl
		 << "max =" << max << endl;
}
int main()
{
	// Write Cpp code here
	int a[] = {4, 2, 4, 23, 21, 45, 23, 5};
	int n = sizeof(a) / sizeof(a[0]);
	findMinMax(a, n);
	return 0;
}