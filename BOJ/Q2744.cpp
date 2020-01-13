#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i] + 32);
		else
			printf("%c", s[i] - 32);
	}
	return 0;
}