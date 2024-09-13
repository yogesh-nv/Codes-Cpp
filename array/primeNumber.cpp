// Method 1: Simple iterative solution
// Method 2: Optimization by break condition
// Method 3: Optimization by n/2 iterations
// Method 4: Optimization by √n
// Method 5: Optimization by skipping even iteration
// Method 6: Basic Recursion technique

// Check prime or not Method 4
#include <iostream>
#include <cmath>
using namespace std;
void checkPrime(int n)
{
	int count = 0;
	for (int i = 2; i < sqrt(n); i++)
		if (n % i == 0)
			count++;
	if (n == 0 || n == 1 || count > 2)
		cout << n << " is not a prime number";
	else
		cout << n << " is a prime number";
}
int main()
{
	cout << "enter a number ";
	int n;
	cin >> n;
	checkPrime(n);
	return 0;
}