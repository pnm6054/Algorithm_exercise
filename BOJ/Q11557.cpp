#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, n, m = 0, w = 0;
	string * s;
	int * l;
	cin >> t;
	while (t--)
	{
		cin >> n;
		s = new string[n];
		l = new int[n];
		cin >> s[0] >> l[0];
		m = l[0];
		for (int i = 1; i < n; i++)
		{
			cin >> s[i] >> l[i];
			if (m < l[i])
			{
				m = l[i];
				w = i;
			}
		}
		cout << s[w] << endl;
	}
	return 0;
}