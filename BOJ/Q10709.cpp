#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int h, w, l, t;
	bool c;
	string s;
	cin >> h >> w;
	while (h--)
	{
		cin >> s;
		c = false;
		l = s.length();
		for (int i = 0; i < l; i++)
		{
			if (s[i] == 'c')
			{
				c = true;
				t = 0;
				cout << t;
			}
			if (s[i] == '.')
			{
				if (c)
				{
					t++;
					cout << t;
				}
				else
				{
					cout << -1;
				}
			}
			cout << " ";
		}
		cout << '\n';
	}
	return 0;
}