#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	a = b - a - 1;
	b = c - b - 1;
	cout << (a > b ? a : b) << endl;
	return 0;
}