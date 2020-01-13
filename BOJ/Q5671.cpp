#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, m, l, t, r;
	string s;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		r = 0;
		for (int i = n; i <= m; i++)
		{
			t = 1;
			s = to_string(i);
			l = s.length();
			if (l == 2 && s[0] == s[1]) t = 0;
			else if (l == 3 && (s[0] == s[1] || s[1] == s[2] || s[0] == s[2])) t = 0;
			else if (l == 4 && (s[0] == s[1] || s[1] == s[2] || s[2] == s[3] || s[0] == s[2] || s[1] == s[3] || s[0] == s[3])) t = 0;
			if (t) r++;
		}
		cout << r << '\n';
	}
	return 0;
}