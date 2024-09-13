// 1)insert  operation:
//  1a)insert at end
#include <iostream>
using namespace std;
int findPos(int a[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;
	}
	return -1;
}
int deleteAtPos(int a[], int n, int key)
{
	int pos = findPos(a, n, key);
	if (pos == -1)
	{
		cout << "element is not found in array";
		exit(0);
	}
	for (int i = pos; i < n - 1; i++)
		a[i] = a[i + 1];
	return n - 1;
}
int main()
{
	int n, key;
	int a[] = {34, 23, 4, 3, 2, 3};
	n = sizeof(a) / sizeof(a[0]);

	cout << "Before deletion " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;

	cout << "enter the element to be delete " << endl;
	cin >> key;

	n = deleteAtPos(a, n, key);

	cout << "After deletion" << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}