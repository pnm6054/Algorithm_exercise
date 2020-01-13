#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int len, r;
	while (1)
	{
		int a[26] = { 0, };
		getline(cin, s);
		if (s[0] == '#') break;
		len = s.length(), r = 0;
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (a[s[i] - 97] == 0)
				{
					r++;
					a[s[i] - 97] = 1;
				}
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				if (a[s[i] - 65] == 0)
				{
					r++;
					a[s[i] - 65] = 1;
				}
			}
		}
		cout << r << endl;
	}
	return 0;
}