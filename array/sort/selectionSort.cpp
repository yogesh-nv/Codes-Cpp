// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	cout << "\nAfter sorting\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[] = {3, 2, 41, 64, 23, 54, 26, 11, 7, 56, 18, 27};
	cout << "Before sorting\n";
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	insertionSort(arr, n);
	return 0;
}