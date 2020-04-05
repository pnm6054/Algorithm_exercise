#include <iostream>
using namespace std;

int main(void)
{
	int t, n, k, l;
	char c;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		l = 0;
		cout << "#" << i << '\n';
		while (n--)
		{
			cin >> c >> k;
			for (int j = 0; j < k; j++)
			{
				cout << c;
				l++;
				if (l % 10 == 0) cout << '\n';
			}
		}
	}
	return 0;
}