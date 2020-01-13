#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, **a, t;
	cin >> n >> m;
	a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> t;
			cout << a[i][j] + t << " ";
		}
		cout << '\n';
	}
	return 0;
}