#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, max, i, o;
	cin >> n >> m;
	max = m;
	while (n--)
	{
		cin >> i >> o;
		m += (i - o);
		if (m < 0)
		{
			max = 0;
			break;
		}
		if (m > max) max = m;
	}
	cout << max << '\n';
	return 0;
}