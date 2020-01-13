#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, ls, lp, r;
	string s, p;
	cin >> t;
	while (t--)
	{
		cin >> s >> p;
		r = 0;
		ls = s.length(), lp = p.length();
		for (int i = 0; i < ls; i++)
		{
			if (s.substr(i, lp) == p)
				i += (lp - 1);
			r++;
		}
		cout << r << endl;
	}
	return 0;
}