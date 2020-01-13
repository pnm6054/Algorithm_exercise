#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, l, a[26] = { 'y', 'h', 'e', 's', 'o','c','v','x','d','u','i','g','l','b','k','r','z','t','n','w','j','p','f','m','a','q' };
	string s;
	cin >> t;
	getline(cin, s);
	for (int i = 1; i <= t; i++)
	{
		getline(cin, s);
		l = s.length();
		for (int j = 0; j < l; j++)
			if (s[j] != ' ') s[j] = a[s[j] - 97];
		cout << "Case #" << i << ": " << s << '\n';
	}
	return 0;
}