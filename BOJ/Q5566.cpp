#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, b[1001], r = 0, e = 0, d;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> b[i];
	for (int i = 0; i < m; i++)
	{
		cin >> d;
		e += d;
		e += b[e];
		if (e >= n - 1)
		{
			r = i;
			break;
		}
	}
	cout << r + 1 << '\n';
	return 0;
}