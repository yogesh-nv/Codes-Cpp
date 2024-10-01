#include <iostream>
#include <string>
using namespace std;
int hexaToDecimal(char hexDigit)
{
	if (hexDigit >= '0' && hexDigit <= '9')
		return hexDigit - '0';
	else if (hexDigit >= 'A' && hexDigit <= 'F')
		return hexDigit - 'A' + 10;
	else if (hexDigit >= 'a' && hexDigit <= 'f')
		return hexDigit - 'a' + 10;
	return -1;
}
int hexaToDecimal(const string &hexString)
{
	int decimal = 0;
	int n = hexString.length();
	for (int i = 0; i < n; i++)
	{
		int currentDigit = hexaToDecimal(hexString[i]);
		if (currentDigit == -1)
		{
			cout << "not valid hexa number" << endl;
			exit(0);
		}
		decimal += currentDigit * pow(16, n - i - 1); // left to right traverse
	}
	return decimal;
}

int main()
{
	cout << "enter hexadecimal number\n";
	string hex;
	cin >> hex;
	cout << hexaToDecimal(hex) << endl;
	return 0;
}
