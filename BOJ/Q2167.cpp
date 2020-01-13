#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, m, **a, k, v, w, x, y;
	cin >> n >> m;
	a = new int*[n + 1];
	for (int i = 0; i <= n; i++)
	{
		a[i] = new int[m + 1];
		for (int j = 0; j <= m; j++)
		{
			if (i == 0 || j == 0) a[i][j] = 0;
			else
			{
				cin >> a[i][j];
				a[i][j] += (a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1]);
			}
		}
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cin >> k;
	while (k--)
	{
		cin >> v >> w >> x >> y;
		cout << a[x][y] - a[max(v, x)][y - 1] << endl; 
	}
	return 0;
}