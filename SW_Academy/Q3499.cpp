#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, n;
	string *s;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		s = new string[n];
		for (int i = 0; i < n; i++)
			cin >> s[i];
		cout << "#" << tc << " ";
		for (int i = 0; i < n / 2; i++)
		{
			cout << s[i] << " " << s[i + (n + 1) / 2] << " ";
		}
		if (n % 2)
			cout << s[n / 2];
		cout << '\n';
	}
	return 0;
}