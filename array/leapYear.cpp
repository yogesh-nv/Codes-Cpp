// 1. If a year is divisible by 400, it's a leap year.
// 2. If a year is divisible by 4 but not by 100 then its leap year
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int year;

	year = 2000;

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		cout << year << " is a Leap Year";

	// not leap year
	else
		cout << year << " is not a Leap Year";

	return 0;
}