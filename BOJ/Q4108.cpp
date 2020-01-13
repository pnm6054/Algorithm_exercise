#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c, r;
	string *m, t;
	while (1)
	{
		cin >> c >> r;
		if (!c && !r) break;
		m = new string[c + 2];
		for (int i = 0; i < c + 2; i++)
		{
			if (i == 0 || i == c + 1)
				m[i].assign(r + 2, '0');
			else
			{
				m[i].assign("0");
				cin >> t;
				m[i] += t;
				m[i].push_back('0');
			}
		}
		for (int i = 1; i < c + 1; i++)
		{
			for (int j = 1; j < r + 1; j++)
			{
				if (m[i][j] != '*')
				{
					m[i][j]+=2;
					if (m[i - 1][j - 1] == '*') m[i][j]++;
					if (m[i - 1][j] == '*') m[i][j]++;
					if (m[i - 1][j + 1] == '*') m[i][j]++;
					if (m[i][j - 1] == '*') m[i][j]++;
					if (m[i][j + 1] == '*') m[i][j]++;
					if (m[i + 1][j - 1] == '*')m[i][j]++;
					if (m[i + 1][j] == '*')m[i][j]++;
					if (m[i + 1][j + 1] == '*')m[i][j]++;
				}
			}
		}
		for (int i = 1; i < c + 1; i++)
		{
			cout << m[i].substr(1, r) << endl;
		}
	}
	return 0;
}