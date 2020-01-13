#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, b, l, p;
	string s, io, c;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> b >> io;
		s.clear();
		l = io.length();
		p = 0;
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < 8; k++)
			{
				if (io[p] == 'I') c.push_back('1');
				else c.push_back('0');
				p++;
			}
			s.push_back(stoi(c, nullptr, 2));
			c.clear();
		}
		cout << "Case #" << i << ": " << s << '\n';
	}
	return 0;
}