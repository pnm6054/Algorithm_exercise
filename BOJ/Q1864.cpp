#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	long long r, k;
	int l;
	while (1)
	{
		cin >> s;
		if (s == "#") break;
		r = 0, k = 1;
		l = s.length();
		for (int i = l - 1; i >= 0; i--)
		{
			switch (s[i])
			{
			case 92: 
				r += k;
				break;
			case 40:
				r += k * 2;
				break;
			case 64:
				r += k * 3;
				break;
			case 63:
				r += k * 4;
				break;
			case 62:
				r += k * 5;
				break;
			case 38:
				r += k * 6;
				break;
			case 37:
				r += k * 7;
				break;
			case 47:
				r += k * -1;
				break;
			}
			k *= 8;
		}
		cout << r << '\n';
	}
	return 0;
}