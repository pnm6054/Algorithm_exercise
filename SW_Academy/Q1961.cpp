#include <iostream>
using namespace std;

int main(void)
{
	int t, n, **a;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		a = new int*[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << "#" << tc << '\n';
		for (int p = 0; p < n; p++)
		{
			for (int i = n - 1; i >= 0; i--)
			{
				cout << a[i][p];
			}
			cout << " ";
			for (int i = n - 1; i >= 0; i--)
			{
				cout << a[n - p - 1][i];
			}
			cout << " ";
			for (int i = 0; i < n; i++)
			{
				cout << a[i][n - p - 1];
			}
			cout << '\n';
		}
	}
	return 0;
}