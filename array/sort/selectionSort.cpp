#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minIndex])
				minIndex = j;
		}

		if (minIndex != i)
			swap(a[i], a[minIndex]);
	}
}
int main()
{
	int a[] = {8, 2, 1, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
	cout << endl;
	selectionSort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
	return 0;
}
