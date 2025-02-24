#include <iostream>
#include <vector>
using namespace std;
void begin()
{
	vector<int> v(5, 200);
	v.push_back(10);
	v.push_back(3);
	v.push_back(33);
	v.push_back(32);
	cout << *v.begin() << endl;
	cout << *(--v.end()) << endl;
}
void rbegin()
{
	cout << "\nrbegin()" << endl;
	vector<int> v2;
	v2.push_back(12);
	v2.push_back(13);
	v2.push_back(14);
	v2.push_back(15);
	v2.emplace_back(400);
	cout << *v2.rbegin() << endl;
	cout << *(--v2.rend()) << endl;
	cout << v2.size() << endl;
	cout << v2.capacity() << endl;
	cout << v2.at(2) << endl;
}
int main()
{
	begin();
	rbegin();
	return 0;
}