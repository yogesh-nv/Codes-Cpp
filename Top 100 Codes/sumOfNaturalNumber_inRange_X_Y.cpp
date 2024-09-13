// sum of natural number in range x,y
/*Method 1: formula
	y*(y+1)/2 + x*(x+1)/2 -x
Method 2: for loop for(int i=x;i<=y;i++)
Method 3: recursion
*/
#include <iostream>
using namespace std;
int calc(int x, int y)
{
	if (x > y)
		return 0;
	return x + calc(x + 1, y);
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << "sum=" << calc(x, y);
	return 0;
}