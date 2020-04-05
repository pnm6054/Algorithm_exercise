#include <iostream>
using namespace std;

int main(void)
{
	int n, m, **f, t, a, max;
	cin >> t;
	for (int q = 1; q <= t; q++)
	{
		cin >> n >> m;
		max = 0;
		f = new int*[n];
		for (int i = 0; i < n; i++)
		{
			f[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cin >> f[i][j];
			}
		}
		for (int i = 0; i < n - m + 1; i++)
		{
			for (int j = 0; j < n - m + 1; j++)
			{
				a = 0;
				for (int x = i; x < i + m; x++)
				{
					for (int y = j; y < j + m; y++)
					{
						a += f[x][y];
					}
				}
				if (max < a) max = a;
			}
		}
		cout << "#" << q << " " << max << '\n';
	}
	return 0;
}