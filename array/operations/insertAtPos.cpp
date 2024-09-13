// 1)insert  operation:
//  1b)insert at pos
#include <iostream>
using namespace std;
void insertAtPos(int a[], int n, int x, int pos)
{
	for (int i = n - 1; i >= pos; i--)
		a[i + 1] = a[i];
	a[pos] = x;
}
int main()
{
	int n, x, pos;
	int a[20] = {34, 23, 4, 3, 2, 3};
	n = 6;
	cout << "Before insertion " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	cout << "enter the position " << endl;
	cin >> pos;
	cout << "enter the element " << endl;
	cin >> x;
	insertAtPos(a, n, x, pos);
	cout << "After insertion" << endl;
	n++;
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}