#include <iostream>
using namespace std;

int main(void)
{
	int t, n, r;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		r = 0;
		for (int j = 1; j <= n; j++)
		{
			if (j % 2) r += j;
			else r -= j;
		}
		cout << "#" << i << " " << r << '\n';
	}
	return 0;
}