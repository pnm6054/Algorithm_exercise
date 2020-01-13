#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, a[26] = { 0, }, t = 0;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		a[s[0] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (a[i] >= 5)
		{
			cout << char(i + 97);
			t++;
		}
	}
	if (t == 0) cout << "PREDAJA" << endl;
	return 0;
}