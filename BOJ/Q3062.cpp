#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	bool e;
	int t, sum, len;
	string s;
	cin >> t;
	while (t--)
	{
		sum = 0;
		e = 1;
		cin >> s;
		sum += stoi(s);
		reverse(s.begin(), s.end());
		sum += stoi(s);
		s = to_string(sum);
		len = s.length();
		for (int i = 0; i < len / 2; i++)
		{
			if (s[i] != s[len - i - 1])
			{
				e = 0;
				break;
			}
		}
		if (e) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}