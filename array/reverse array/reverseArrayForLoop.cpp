// find reversing array using for loop
#include <iostream>
using namespace std;
int reverseArray(int arr[], int start, int end)
{
	int temp;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	return 0;
}
int main()
{
	// Write Cpp code here
	int arr[] = {4, 2, 4, 23, 21, 45, 23, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Before reverse " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	reverseArray(arr, 0, n - 1);

	cout << "After reversed" << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}