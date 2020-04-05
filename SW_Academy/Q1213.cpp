#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s, c;
	int n, ls, lc, r;
	while (1)
	{
		cin >> n >> c >> s;
		ls = s.length();
		lc = c.length();
		r = 0;
		for (int i = 0; i < ls - lc; i++)
		{
			if (s.substr(i, lc) == c) r++;
		}
		cout << "#" << n << " " << r << '\n';
		if (n == 1) break;
	}
	return 0;
}