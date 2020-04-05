#include <iostream>
using namespace std;

int main(void)
{
	int t, n, k, *s, v;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> k;
		s = new int[n];
		for (int i = 0; i < n; i++)
			s[i] = 1;
		for (int i = 0; i < k; i++)
		{
			cin >> v;
			s[v - 1] = 0;
		}
		cout << "#" << tc << " ";
		for (int i = 0; i < n; i++)
			if (s[i]) cout << i + 1 << " ";
		cout << '\n';
	}
	return 0;
}