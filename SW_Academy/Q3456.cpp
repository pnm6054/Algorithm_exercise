#include <iostream>
using namespace std;

int main(void)
{
	int t, a, b, c, r;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> a >> b >> c;
		if (a == b)
			r = c;
		else if (b == c)
			r = a;
		else if (a == c)
			r = b;
		cout << "#" << tc << " " << r << '\n';
	}
	return 0;
}