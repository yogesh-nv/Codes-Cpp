// Bubble sort
// Time complexity is O(n^2)
// Go through the array, one value at a time.
// For each value, compare the value with the next value.
// If the value is higher than the next one, swap the values so that the highest value comes last.
// Go through the array as many times as there are values in the array.

#include <iostream>
using namespace std;
void swap(int &a, int &b) // pass by reference
{
	int temp = a;
	a = b;
	b = temp;
}
void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
}
int main()
{
	int a[] = {8, 2, 1, 4, 5, 6, 7, 53, 6, 784, 45, 7};
	int n = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
	cout << endl;
	bubbleSort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
	return 0;
}
