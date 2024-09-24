#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) // conquer part
{
	int n1 = mid - left + 1; // to calculate size to declare Left array
	int n2 = right - mid;	 // to calculate size to declare Right array
	int L[n1], R[n2];
	int i = 0, j = 0, k = left;

	for (i = 0; i < n1; i++) // Copying array elements to Left array
		L[i] = arr[left + i];

	for (j = 0; j < n2; j++) // Copying array elements to Right array
		R[j] = arr[mid + 1 + j];

	i = 0;
	j = 0;
	while (i < n1 && j < n2) // comparing two sorted array elements using Two pointer
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) // to insert remaining Left array element
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) // to insert remaining Right array element
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right) // dividing part
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);		// Left part
		mergeSort(arr, mid + 1, right); // Right part
		merge(arr, left, mid, right);	// merge part
	}
}
int main()
{
	int arr[] = {8, 2, 1, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;
	mergeSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << " " << arr[i];
	}
	return 0;
}
