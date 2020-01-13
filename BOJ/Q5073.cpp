#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a, b, c, mx, r;
	while (1)
	{
		cin >> a >> b >> c;
		if (!a && !b && !c) break;
		r = 1;
		mx = max(max(a, b), c);
		if (mx == a && a >= b + c)
			r = 0;
		else if (mx == b && b >= a + c)
			r = 0;
		else if (mx == c && c >= a + b)
			r = 0;
		if (r)
		{
			if (a == b && b == c) cout << "Equilateral" << endl;
			else if (a != b && b != c && c != a) cout << "Scalene" << endl;
			else cout << "Isosceles" << endl;
		}
		else
			cout << "Invalid" << endl;
	}
	return 0;
}