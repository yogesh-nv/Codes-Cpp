#include <stdio.h>

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf(" %d", arr[i]);
	printf("\n");
}
void selection_sort(int arr[], int n)
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
	int arr[] = {9, 3, 6, 8, 2, 12, 65, 34, 89, 33};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("before sorting array elements\n");
	print(arr, n);
	printf("After sorting array elements\n");
	selection_sort(arr, n);
	print(arr, n);
}
