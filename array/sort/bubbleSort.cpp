// Bubble sort
// Time complexity is o(n^2)
// Go through the array, one value at a time.
// For each value, compare the value with the next value.
// If the value is higher than the next one, swap the values so that the highest value comes last.
// Go through the array as many times as there are values in the array.

#include <iostream>
using namespace std;
int bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	cout << "\n after sorted\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	return 0;
}
int main()
{
	int arr[] = {5, 34, 24, 64, 42, 54, 400, 66, 7, 23, 6, 65};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "before sorted \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	bubble_sort(arr, n);
	return 0;
}