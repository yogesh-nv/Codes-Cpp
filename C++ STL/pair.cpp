#include <iostream>
#include <utility>
#include <string>
using namespace std;
int main()
{
	pair<int, int> Pair1(100, 200);
	pair<string, int> Pair2("Yogesh n v", 200);
	pair<string, int> Pair3;
	cout << Pair1.first << Pair1.second;
	cout << Pair2.first << Pair2.second;
	cout << endl;
	Pair3 = make_pair("this is default making pair", 214);
	cout << Pair3.first << endl;
	Pair2.swap(Pair3);
	cout << Pair2.first << Pair2.second;
	return 0;
}
