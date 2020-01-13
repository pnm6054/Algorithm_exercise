#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, len;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> s;
		len = s.length() / 2;
		if (s[len] == s[len - 1]) cout << "Do-it" << endl;
		else cout << "Do-it-Not" << endl;
	}
	return 0;
}