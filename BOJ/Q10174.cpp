#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, len;
	string s, r;
	cin >> n;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		len = s.length();
		for (int i = 0; i < len; i++)
			if (s[i] >= 'A' && s[i] <= 'Z') s[i] = char(s[i] + 32);
		r.assign(s);
		reverse(r.begin(), r.end());
		if (!s.compare(r)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}