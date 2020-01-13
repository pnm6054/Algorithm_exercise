#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int l, p, c;
	while (!cin.eof())
	{
		p = 0;
		getline(cin, s);
		l = s.length();
		for (int i = 0; i < l; i++)
		{
			switch (s[i])
			{
			case 'B':
			case 'F':
			case 'P':
			case 'V':
				c = 1;
				break;
			case 'C':
			case 'G':
			case 'J':
			case 'K':
			case 'Q':
			case 'S':
			case 'X':
			case 'Z':
				c = 2;
				break;
			case 'D':
			case 'T':
				c = 3;
				break;
			case 'L':
				c = 4;
				break;
			case 'M':
			case 'N':
				c = 5;
				break;
			case 'R':
				c = 6;
				break;
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'H':
			case 'W':
			case 'Y':
				c = 0;
				break;
			}
			if (p == c) continue;
			else
			{
				if (c != 0) cout << c;
				p = c;
			}
		}
		cout << '\n';
	}
	return 0;
}