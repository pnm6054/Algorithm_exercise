#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t, a, b, c, mx, s;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		s = 1;
		cin >> a >> b >> c;
		cout << "Case #" << i + 1 << ": ";
		mx = max(max(a, b), c);
		if (mx == a && a >= b + c) s = 0;
		else if (mx == b && b >= a + c) s = 0;
		else if (mx == c && c >= a + b) s = 0;
		if (s)
		{
			if (a == b && b == c) cout << "equilateral" << endl;
			else if (a != b && b != c && c != a) cout << "scalene" << endl;
			else cout << "isosceles" << endl;
		}
		else
			cout << "invalid!" << endl;
	}
	return 0;
}