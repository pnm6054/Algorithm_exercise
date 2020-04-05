#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, l, p;
	string s;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> s;
		l = s.length();
		p = 1;
		for (int j = 0; j < l / 2; j++)
			if (s[j] != s[l - j - 1])
			{
				p = 0;
				break;
			}
		cout << "#" << i << " " << p << '\n';
	}
	return 0;
}