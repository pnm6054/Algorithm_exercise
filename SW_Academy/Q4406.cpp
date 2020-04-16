#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t, l;
	string s;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> s;
		cout << "#" << tc << " ";
		l = s.length();
		for (int i = 0; i < l; i++)
		{
			if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
				cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}
