#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int r, l;
	while (1)
	{
		cin >> s;
		r = 0;
		if (s == "0") break;
		while ((l = s.length()) != 1)
		{
			for (int i = 0; i < l; i++)
				r += (s[i] - 48);
			s = to_string(r);
			r = 0;
		}
		cout << s << '\n';
	}
	return 0;
}