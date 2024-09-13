// insertion sort
#include <iostream>
using namespace std;
int insertion_Sort(int arr[], int n)
{
	int temp = 0, j;
	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
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
	insertion_Sort(arr, n);
	return 0;
}