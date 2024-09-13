// 1)insert  operation:
//  1a)insert at end
#include <iostream>
using namespace std;
int insertAtEnd(int a[], int n, int capacity, int key)
{
	if (n >= capacity)
		return n;
	a[n] = key;
	return (n + 1);
}
int main()
{
	int n, capacity;
	int a[20] = {34, 23, 4, 3, 2, 3};
	capacity = sizeof(a) / sizeof(a[0]);
	n = 6; // current size of array
	int i, key = 43;
	cout << "Before insertion\n";
	for (i = 0; i < n; i++)
		cout << a[i] << endl;
	cout << "After insertion\n";
	n = insertAtEnd(a, n, capacity, key);
	for (i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}