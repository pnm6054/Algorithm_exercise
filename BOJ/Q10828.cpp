#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, top = -1, e = 1, i;
	int * a = new int[10000];
	string s;
	cin >> t;
	while (t--)
	{
		cin >> s;
		if (!s.compare("push"))
		{
			cin >> i;
			top++;
			a[top] = i;
			if (e) e = 0;
		}
		else if (!s.compare("pop"))
		{
			if (e) cout << -1 << endl;
			else
			{
				cout << a[top--] << endl;
				if (top < 0) e = 1;
			}
		}
		else if (!s.compare("size")) cout << top + 1 << endl;
		else if (!s.compare("empty")) cout << e << endl;
		else
		{
			if (e) cout << -1 << endl;
			else cout << a[top] << endl;
		}
	}
	return 0;
}