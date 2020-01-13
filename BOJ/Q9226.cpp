#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s, p;
	int l, n;
	while (1)
	{
		cin >> s;
		if (s[0] == '#') break;
		l = s.length(), n = 0, p = "";
		for (int i = 0; i < l; i++)
		{
			if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
			{
				p.push_back(s[i]);
				n++;
			}
			else break;
		}
		cout << s.substr(n) << p << "ay" << endl;
	}
	return 0;
}