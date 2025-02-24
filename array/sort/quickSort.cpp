#include <iostream>
#include <vector>
using namespace std;

// Partition function (First element as pivot)
int partition(vector<int> &arr, int low, int high)
{
	int pivot = arr[low]; // First element as pivot
	int i = low + 1, j = high;

	while (i <= j)
	{
		// Find an element greater than the pivot
		while (i <= high && arr[i] <= pivot)
			i++;
		// Find an element smaller than the pivot
		while (arr[j] > pivot)
			j--;

		// Swap elements if i is still less than j
		if (i < j)
			swap(arr[i], arr[j]);
	}

	// Swap pivot into its correct position
	swap(arr[low], arr[j]);

	return j; // Pivot index
}

// Quick Sort function
void quickSort(vector<int> &arr, int low, int high)
{
	if (low < high)
	{
		int pivotIndex = partition(arr, low, high); // Partitioning

		quickSort(arr, low, pivotIndex - 1);  // Sort left part
		quickSort(arr, pivotIndex + 1, high); // Sort right part
	}
}

// Function to print the array
void printArray(const vector<int> &arr)
{
	for (int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> arr = {9, 5, 1, 4, 3, 7};

	cout << "Before Sorting: ";
	printArray(arr);

	quickSort(arr, 0, arr.size() - 1);

	cout << "After Sorting: ";
	printArray(arr);

	return 0;
}