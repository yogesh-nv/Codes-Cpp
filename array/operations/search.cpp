// Array
// Operation of array:
// 1)Searching operation:
#include <iostream>
using namespace std;
int findArrayElement(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
int main()
{
	int n, key;
	cout << "Enter the sizeof array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the array elements" << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Enter the array element to be search " << endl;
	cin >> key;
	int position = findArrayElement(arr, n, key);
	if (position == -1)
		cout << "Element is not found in array" << endl;
	else
		cout << "Element " << key << " is found at position " << position + 1;
	return 0;
}