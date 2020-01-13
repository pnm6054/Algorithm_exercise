#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	int t, l, sl;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> s;
		l = s.length();
		sl = (int)sqrt(l);
		for (int i = sl - 1; i >= 0; i--)
		{
			for (int j = 0; j < l; j += sl)
			{
				cout << s[i + j];
			}
		}
		cout << endl;
	}
	return 0;
}