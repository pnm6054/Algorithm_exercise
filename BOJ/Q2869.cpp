#include <iostream>
using namespace std;

int main(void)
{
	int a, b, v, c;
	cin >> a >> b >> v;
	c = a - b;
	v -= (a - 1);
	cout << v / c << endl;
	return 0;
}