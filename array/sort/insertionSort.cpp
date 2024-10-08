#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	int arr[] = {54, 23, 59, 65, 12, 14, 8, 21, 545, 12, 85, 65};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	insertionSort(arr, n);
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
