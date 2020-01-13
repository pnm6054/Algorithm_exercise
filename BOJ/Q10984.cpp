#include <iostream>
using namespace std;

int main(void)
{
	int t, n, tc, c;
	double tg, g;
	cin >> t;
	while (t--)
	{
		tc = 0;
		tg = 0.0;
		cin >> n;
		while (n--)
		{
			cin >> c >> g;
			tc += c;
			tg += (c * g);
		}
		printf("%d %0.1f\n", tc, tg / tc + 1e-9);
	}
	return 0;
}