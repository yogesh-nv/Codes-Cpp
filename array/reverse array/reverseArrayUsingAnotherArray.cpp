// find reverse using another array
#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{

	int reverse[n];
	for (int i = 0; i < n; i++)
	{
		reverse[n - i - 1] = arr[i];
	}
	cout << "After reverse " << endl;
	for (int i = 0; i < n; i++)
		cout << reverse[i] << endl;
}
int main()
{
	// Write Cpp code here
	int arr[] = {4, 2, 4, 23, 21, 45, 23, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Before reverse " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	reverseArray(arr, n);
	return 0;
}