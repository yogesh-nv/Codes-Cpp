#include <iostream>
using namespace std;

int main()
{
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}};

	int rows = sizeof(arr) / sizeof(arr[0]);	   // Number of rows
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of columns

	cout << "Rows: " << rows << endl;
	cout << "Columns: " << cols << endl;

	return 0;
}
