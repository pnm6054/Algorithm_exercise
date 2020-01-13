#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, len, c, d, res = 0, e;
	string s;
	cin >> t;
	while (t--)
	{
		int a[26] = { 0, };
		e = 1;
		cin >> s;
		len = s.length();
		c = s[0];
		for (int i = 1; i < len; i++)
		{
			d = s[i];
			if (c != d)
			{
				if (a[d - 97] == 1)
				{
					e = 0;
					break;
				}
				a[c - 97] = 1;
				c = d;
			}
		}
		if (e) res++;
	}
	cout << res << endl;
	return 0;
}