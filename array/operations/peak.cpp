// Find a peak element which is not smaller than its neighbours
// link https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int peak(int arr[], int n)
{
	if (n == 1)
		return 0;
	if (arr[0] >= arr[1])
		return 0;
	if (arr[n - 1] >= arr[n - 2])
		return n - 1;
	for (int i = 1; i <= n - 1; i++)
	{
		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			return i;
	}
	return 0;
}
int main()
{

	int arr[] = {4, 34, 54, 22, 3, 4, 2, 3, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	;
	cout << "Index of a peak point is " << peak(arr, n);
	return 0;
}