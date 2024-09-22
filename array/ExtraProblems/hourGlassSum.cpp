// https://www.hackerrank.com/challenges/2d-array/problem?isFullScreen=true
#include <iostream>
using namespace std;
int hourglassSum(int arr[][6])
{
	int max_sum = INT32_MIN;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			int current_sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
							  arr[i + 1][j + 1] +
							  arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
			max_sum = max(max_sum, current_sum);
		}
	return max_sum;
}
int main()
{
	int arr[6][6];
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> arr[i][j];
	cout << hourglassSum(arr);
	return 0;
}