#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, l, w;
	string a, s;
	cin >> t;
	for (int k = 1; k <= t; k++)
	{
		cin >> l >> a >> s;
		w = 0;
		for (int i = 0; i < l; i++)
			if (a[i] != s[i]) w++;
		cout << "Case " << k << ": " << w << '\n';
	}
}