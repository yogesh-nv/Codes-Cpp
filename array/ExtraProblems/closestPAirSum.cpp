// Closest Pair in Sorted Array Problem Description
/*Given a sorted array of n integers and a value x. Find the pair of elements from the array such that the sum of the elements is closest to the given value x.

Input:

First-line contains two integers n & x.
The next Line contains n integers the elements of the array.
Output:

The required pair.
Example

Input

3 4
2 3 5
Output

2 3
*/
#include <iostream>
using namespace std;
void printPair(int a[], int n, int x)
{
	int closestPairLeft = 0;
	int closestPairRight = 0;
	int closestSum = 5353535;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			int sum = a[i] + a[j];
			if (abs(sum - x) < abs(closestSum - x))
			{
				closestSum = sum;
				closestPairLeft = a[i];
				closestPairRight = a[j];
			}
		}
	cout << closestPairLeft << " " << closestPairRight << endl;
}
int main()
{
	int n = 6, x = 43;
	int arr[] = {10, 25, 28, 39, 40, 49};
	printPair(arr, n, x);
	return 0;
}