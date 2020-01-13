#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, res;
	cin >> a >> b >> c;
	if (a == b && b == c)
		res = 10000 + a * 1000;
	else if (a != b && b != c && c != a)
	{
		if (a > b)
			if (a > c) res = a;
			else res = c;
		else if (b > a)
			if (b > c) res = b;
			else res = c;
		else if (c > a)
			if (b > c) res = b;
			else res = c;
		res *= 100;
	}
	else if (a == b && b != c)
		res = 1000 + a * 100;
	else if (a == c && b != c)
		res = 1000 + a * 100;
	else if (b == c && a != b)
		res = 1000 + b * 100;
	cout << res << endl;
	return 0;
}