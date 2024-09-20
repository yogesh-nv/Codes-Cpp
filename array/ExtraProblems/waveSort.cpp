/*Sort Array in Wave Form
In sort array in wave form we have to sort the array such that the elements are arranged in a wave. It is a famous interview problem that is asked in many technical interviews. In this article, we will provide a C++ solution with an explanation.

Sort Array in Wave Form Problem Description
Sort Array in Wave Form Problem Description
Given an array of n integers. Sort the array in such a way that the numbers in the array are arranged in a waveform from left to right.

Example –

3 2 4 1 is a wave

But 1 2 3 is not a wave.

Input:

First line contains single integer n – the size of the array.
Next Line contains n integers the elements of the array.
Output:

N integers sorted in waveform.
*/
#include <iostream>
using namespace std;
int bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	cout << "\n after sorted\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	return 0;
}
void waveSort(int arr[], int n)
{
	bubble_sort(arr, n);
	for (int i = 0; i < n - 1; i += 2)
	{
		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
}
int main()
{
	int n = 5;
	int arr[5] = {3, 4, 2, 1, 5};
	waveSort(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ” “;
	return 0;
}