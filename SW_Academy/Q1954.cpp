#include <iostream>
using namespace std;

int main(void)
{
	int n, **s, t, e, x, y;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		s = new int*[n + 2];
		for (int i = 0; i < n + 2; i++)
		{
			s[i] = new int[n];
			for (int j = 0; j < n + 2; j++)
			{
				if (i == 0 || i == n + 1 || j == 0 || j == n + 1)
					s[i][j] = 1;
				else 
					s[i][j] = 0;
			}
		}
		e = 1, x = 1, y = 1;
		while (1)
		{
			if (s[y + 1][x] && s[y][x + 1] && s[y - 1][x] && s[y][x - 1])
			{
				s[y][x] = e;
				break;
			}
			while (1)
			{
				if (s[y][x + 1]) break;
				else
				{
					s[y][x] = e;
					e++;
					x++;
				}
			}
			while (1)
			{
				if (s[y + 1][x]) break;
				else
				{
					s[y][x] = e;
					e++;
					y++;
				}
			}
			while (1)
			{
				if (s[y][x - 1]) break;
				else
				{
					s[y][x] = e;
					e++;
					x--;
				}
			}
			while (1)
			{
				if (s[y - 1][x]) break;
				else
				{
					s[y][x] = e;
					e++;
					y--;
				}
			}
		}
		cout << "#" << i << '\n';
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << s[i][j] << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}