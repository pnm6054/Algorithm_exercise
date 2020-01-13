#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int o, z;
	while (1)
	{
		o = 0, z = 0;
		cin >> s;
		if (s[0] == '#') break;
		for (int i = 0; i < s.length() - 1; i++)
			if (s[i] == '0') z++;
			else o++;
		if (s.back() == 'e')
			if (o % 2 == 1) s.back() = '1';
			else s.back() = '0';
		else
			if (o % 2 == 0) s.back() = '1';
			else s.back() = '0';
		cout << s << endl;
	}
	return 0;
}