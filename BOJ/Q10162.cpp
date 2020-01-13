#include <iostream>
using namespace std;

int main(void)
{
	int d, a, b, c;
	cin >> d;
	if (d % 10 != 0)
		cout << -1 << endl;
	else
	{
		a = d / 300;
		d = d % 300;
		b = d / 60;
		d = d % 60;
		c = d / 10;
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}