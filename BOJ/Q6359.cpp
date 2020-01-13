#include <iostream>
using namespace std;

int main(void)
{
	int t, n, *p, r;
	cin >> t;
	while (t--)
	{
		cin >> n;
		r = 0;
		p = new int[n + 1];
		for (int i = 0; i <= n; i++) p[i] = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; i * j <= n; j++)
			{
				p[i*j] = !p[i*j];
			}
		}
		for (int i = 1; i <= n; i++) if (p[i]) r++;
		cout << r << endl;
	}
	return 0;
}