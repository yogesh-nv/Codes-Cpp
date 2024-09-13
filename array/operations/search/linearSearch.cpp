// Linear search
#include <iostream>
using namespace std;
int findElement(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
int main()
{
	int arr[] = {20, 30, 2, 403, 45, 53, 22, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter the element to find in array\n";
	int key;
	cin >> key;
	int result = findElement(arr, n, key);
	(result == -1) ? cout << "Element not found in array" : cout << "element found at index " << result;
	return 0;
}