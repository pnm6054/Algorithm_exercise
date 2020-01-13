#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int l, r, f;
	while (1)
	{
		ios::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		cin >> s;
		r = 0, f = 1;
		if (s[0] == '0') break;
		l = s.length();
		for (int i = 1; i <= l; i++)
		{
			f *= i;
			r += ((s[l - i] - 48) * f);
		}
		cout << r << "\n";
	}
	return 0;
}