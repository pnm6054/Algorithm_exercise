#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k, *a, sum, res;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> k;
		a = new int[n];
		res = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < (1 << (n)); i++)
		{
			sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (i & (1 << j)) sum += a[j];
			}
			if (sum == 3) res++;
		}
		cout << "#" << tc << " " << res << '\n';
	}
	return 0;
}