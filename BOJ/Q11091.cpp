#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string s;
	cin >> t;
	getline(cin, s);
	while (t--)
	{
		int sum = 0, n[26] = { 0, };
		getline(cin, s);
		for (int i = 0; i < s.length(); i++)
			if (s[i] >= 'A' && s[i] <= 'Z') n[s[i] - 65] = 1;
			else if (s[i] >= 'a' && s[i] <= 'z') n[s[i] - 97] = 1;

		for (int i = 0; i < 26; i++) sum += n[i];
		if (sum == 26)
			cout << "pangram";
		else
		{
			cout << "missing ";
			for (int i = 0; i < 26; i++)
				if (!n[i]) cout << char(i + 97);
		}
		cout << endl;
	}
	return 0;
}