#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, i, e = 1, f = 0, b = 0;
	int * q = new int[10000];
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		if (!s.compare("push"))
		{
			if (e) e = 0;
			cin >> i;
			q[b] = i;
			b++;
		}
		else if (!s.compare("pop"))
		{
			if (e) cout << -1 << endl;
			else
			{
				cout << q[f] << endl;
				f++;
				if (f == b) e = 1;
			}
		}
		else if (!s.compare("size"))
		{
			cout << b - f << endl;
		}
		else if (!s.compare("empty"))
		{
			cout << e << endl;
		}
		else if (!s.compare("front"))
		{
			if (e) cout << -1 << endl;
			else cout << q[f] << endl;
		}
		else
		{
			if (e) cout << -1 << endl;
			else cout << q[b-1] << endl;
		}
	}
	return 0;
}