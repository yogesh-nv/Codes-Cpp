// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void printArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
void commonElements(int a[], int b[], int c[], int na, int nb, int nc)
{
	int i, j, k;
	i = j = k = 0;
	while (i < na && j < nb && k < nc)
	{
		if (a[i] == b[j] && a[i] == c[k])
		{
			cout << a[i] << " ";
			i++;
			j++;
			k++;
		}
		else if (a[i] <= b[j] && a[i] <= c[k])
			i++;
		else if (b[j] <= a[i] && b[j] <= c[k])
			j++;
		else if (c[k] <= a[i] && c[k] <= b[j])
			k++;
	}
}
int main()
{
	int a[] = {3, 8, 9, 11, 16, 18};
	int b[] = {1, 3, 5, 9, 12, 18};
	int c[] = {3, 4, 6, 8, 9, 12, 18};
	int na = sizeof(a) / sizeof(a[0]);
	int nb = sizeof(b) / sizeof(b[0]);
	int nc = sizeof(c) / sizeof(c[0]);
	cout << "Array elements are \na[]= ";
	printArray(a, na);
	cout << "\nb[]= ";
	printArray(b, nb);
	cout << "\nc[]= ";
	printArray(c, nc);
	commonElements(a, b, c, na, nb, nc);
	return 0;
}