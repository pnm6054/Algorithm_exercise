#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, l, e;
	string s;
	char c;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> s;
		c = s[0];
		l = s.length();
		e = 0;
		for (int i = 1; i < l; i++)
		{
			if (s[i] != s[i - 1]) e++;
		}
		cout << "#" << tc << " " << e << '\n';
	}
	return 0;
}