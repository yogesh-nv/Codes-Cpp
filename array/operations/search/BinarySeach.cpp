// Binary search
#include <iostream>
using namespace std;
int findElement(int arr[], int low, int high, int key)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == key)
			return mid;
		if (arr[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
int main()
{
	int arr[] = {89, 99, 103, 205, 305, 406, 456, 506, 809};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter the element to find in array\n";
	int key;
	cin >> key;
	int result = findElement(arr, 0, n - 1, key);
	(result == -1) ? cout << "Element not found in array" : cout << "element found at index " << result;
	return 0;
}