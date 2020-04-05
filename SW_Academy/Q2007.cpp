#include <iostream>
using namespace std;

int main(void)
{
	int t, pf, l;
	char * s;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		s = new char[31];
		cin >> s;
		for (l = 1; l < 11; l++)
		{
			pf = 1;
			for (int i = 0; i < l; i++)
			{
				for (int j = l; i + j < 30; j += l)
				{
					if (s[i] != s[i + j])
					{
						pf = 0;
						break;
					}
				}
				if (pf) break;
			}
			if (pf) break;
		}
		cout << "#" << tc << " " << l << '\n';
	}
	return 0;
}