#include <iostream>
#include <map>
using namespace std;
int main()
{
	cout << "enter the number of array elements" << endl;
	int n;
	cin >> n;
	cout << "enter the elements" << endl;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	// precompute
	map<int, int> mpp;
	for (int i = 0; i < n; i++)
		mpp[arr[i]]++;
	int q;
	cout << " enter the number of queries" << endl;
	cin >> q;
	while (q--)
	{
		int num;
		cin >> num;
		cout << mpp[num] << endl;
	}
	return 0;
}