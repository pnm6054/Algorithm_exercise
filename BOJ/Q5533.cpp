#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, **g, s[201] = { 0, };
	bool f;
	cin >> n;
	g = new int*[n];
	for (int i = 0; i < n; i++)
	{
		g[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> g[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f = true;
			for (int k = 0; k < n; k++)
			{
				if (j != k && g[j][i] == g[k][i])
				{
					f = false;
				}
			}
			if (f) s[j] += g[j][i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << '\n';
	}
	return 0;
}