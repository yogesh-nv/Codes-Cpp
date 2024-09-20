/*Closest Pair in Two Sorted Arrays Problem Description
Given two sorted arrays & a value x. Find a pair of elements such that –

One element of the pair belong to first array & other to the second array.
The sum of elements of the pair is closest to given value x.
Input:

First line contains single integer x.
Next line contains the size of first array.
Next Line contains n integers the elements of the first array.
First line contains a single integer the size of second array.
Next Line contains n integers the elements of the second array.
Output:

The required pair.*/
#include <iostream>
using namespace std;
void printPair(int a1[], int a2[], int n1, int n2, int x)
{
	int closestPairLeft = 0;
	int closestPairRight = 0;
	int closestSum = 5353535;
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n2; j++)
		{
			int sum = a1[i] + a2[j];
			if (abs(sum - x) < abs(closestSum - x))
			{
				closestSum = sum;
				closestPairLeft = a1[i];
				closestPairRight = a2[j];
			}
		}
	cout << closestPairLeft << " " << closestPairRight << endl;
}
int main()
{
	int n1 = 6, x = 43;
	int a1[] = {10, 25, 28, 39, 40, 49};

	int n2 = 5;
	int a2[] = {4, 7, 10, 20, 29};

	printPair(a1, a2, n1, n2, x);
	return 0;
}