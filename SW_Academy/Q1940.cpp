#include <iostream>
using namespace std;

int main(void)
{
	int t, n, m, s, a, l;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		s = 0;
		l = 0;
		while (n--)
		{
			cin >> m;
			if (m == 1)
			{
				cin >> a;
				s += a;
			}
			else if (m == 2)
			{
				cin >> a;
				s -= a;
				if (s < 0) s = 0;
			}
			l += s;
		}
		cout << "#" << i << " " << l << '\n';
	}
	return 0;
}