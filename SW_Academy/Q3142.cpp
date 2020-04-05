#include <iostream>
using namespace std;

int main(void)
{
	int t, n, m, r;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> m;
		r = 0;
		for (int i = 0; i <= m; i++)
		{
			if (n == 2 * i + m - i)
			{
				r = i;
				break;
			}
		}
		cout << "#" << tc << " " << m - r << " " << r << '\n';
	}
	return 0;
}