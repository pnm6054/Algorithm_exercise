#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, len;
	string m, c;
	cin >> t;
	getline(cin, m);
	while (t--)
	{
		getline(cin, m);
		getline(cin, c);
		len = m.length();
		for (int i = 0; i < len; i++)
			if (m[i] >= 'A' && m[i] <= 'Z')
				cout << c[m[i] - 65];
			else
				cout << m[i];
		cout << endl;
	}
	return 0;
}