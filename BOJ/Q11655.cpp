#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int c;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		c = s[i];
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c += 13;
			if (c > 'z') c = c % 123 + 97;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			c += 13;
			if (c > 'Z') c = c % 91 + 65;
		}
		cout << (char)c;
	}
	cout << endl;
	return 0;
}