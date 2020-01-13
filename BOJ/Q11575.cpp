#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, a, b;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> s;
		for (int i = 0; i < s.length(); i++)
		{
			printf("%c", (a * (s[i] - 65) + b) % 26 + 65);
		}
		cout << endl;
	}
	return 0;
}