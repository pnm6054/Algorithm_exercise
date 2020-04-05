#include <iostream>
using namespace std;

int main(void)
{
	int t, n, m, *a, *b, max, l;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> m;
		a = new int[n];
		b = new int[m];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		max = 0;
		l = 0;
		if (n > m)
		{
			for (int i = 0; i < n - m + 1; i++)
			{
				for (int j = 0; j < m; j++)
				{
					l += (b[j] * a[i + j]);
				}
				if (l > max) max = l;
				l = 0;
			}
		}
		else if (n < m)
		{
			for (int i = 0; i < m - n + 1; i++)
			{
				for (int j = 0; j < n; j++)
				{
					l += (a[j] * b[i + j]);
				}
				if (l > max) max = l;
				l = 0;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
				max += (a[i] * b[i]);
		}
		cout << "#" << tc << " " << max << '\n';
	}
	return 0;
}