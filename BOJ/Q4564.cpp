#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int i, len;
	while (1)
	{
		cin >> i;
		if (!i) break;
		cout << i << " ";
		while (i)
		{
			s = to_string(i), i = 0;
			len = s.length();
			if (len == 1) break;
			else
			{
				i = s[0] - 48;
				for (int j = 1; j < len; j++)
					i *= (s[j] - 48);
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}