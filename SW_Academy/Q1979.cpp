#include <iostream>
using namespace std;

int main(void)
{
	int t, n, k, l, c, r, **a;
	cin >> t;
	for (int tc = 1; tc < t; tc++)
	{
		cin >> n >> k;
		r = 0;
		a = new int*[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			l = 0;
			for (int j = 0; j < n; j++)
			{
				if (a[j][i])
					l++;
				else
					l = 0;
				if (l == k && (j == n - 1 || a[j + 1][i] == 0))
					r++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			l = 0;
			for (int j = 0; j < n; j++)
			{
				if (a[i][j])
					l++;
				else
					l = 0;
				if (l == k && (j == n - 1 || a[i][j + 1] == 0))
					r++;
			}
		}
		cout << "#" << tc << " " << r << '\n';
	}
	return 0;
}