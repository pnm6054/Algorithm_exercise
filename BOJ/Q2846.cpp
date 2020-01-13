#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, *p, m = 0, u = 0, s, t = 0;
	cin >> n;
	p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	s = p[0];
	for (int i = 1; i < n; i++)
	{
		if (p[i - 1] >= p[i])
		{
			s = p[i];
		}
		else
		{
			u = p[i] - s;
			if (u > m) m = u;
		}
	}
	cout << m << endl;
	return 0;
}