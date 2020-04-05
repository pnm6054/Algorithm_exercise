#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int s[9][9], t, p, r;
	vector<int> v;
	cin >> t;
	for (int k = 1; k <= t; k++)
	{
		p = 1;
		for (int i = 0; i < 9; i++)
		{
			v.assign(10, 0);
			r = 0;
			for (int j = 0; j < 9; j++)
			{
				cin >> s[i][j];
				if (v[s[i][j]] == 0) 
				{
					r++;
					v[s[i][j]] = 1;
				}
			}
			if (r != 9)
			{
				p = 0;
			}
		}
		for (int i = 0; i < 9; i++)
		{
			v.assign(10, 0);
			r = 0;
			for (int j = 0; j < 9; j++)
			{
				if (v[s[j][i]] == 0)
				{
					r++;
					v[s[j][i]] = 1;
				}
			}
			if (r != 9)
			{
				p = 0;
			}
		}
		for (int i = 0; i < 9; i+=3)
		{
			for (int j = 0; j < 9; j+=3)
			{
				v.assign(10, 0);
				r = 0;
				for (int a = i; a < i + 3; a++)
				{
					for (int b = j; b < j + 3; b++)
					{
						if (v[s[a][b]] == 0)
						{
							r++;
							v[s[a][b]] = 1;
						}
					}
				}
				if (r != 9)
				{
					p = 0;
				}
			}
		}
		cout << "#" << k << " " << p << '\n';
	}
	return 0;
}