#include <stdio.h>

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf(" %d", arr[i]);
	printf("\n");
}
void selection_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
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
