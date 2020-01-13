#include <iostream>
using namespace std;

int main(void)
{
	int n, m, *a, s = 0, e = 0, sum = 0, res = 0;
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	while (1)
	{
		if (sum >= m) sum -= a[s++];
		else if (e == n) break;
		else sum += a[e++];
		if (sum == m) res++;
	}
	cout << res << "\n";
	return 0;
}