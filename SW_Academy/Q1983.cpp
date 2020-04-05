#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
	//const char * a[] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
	const char * a[] = { "D0", "C-", "C0", "C+", "B-" , "B0", "B+", "A-", "A0", "A+" };
	int t, n, k, m, f, r;
	double *s, st;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> k;
		s = new double[n];
		for (int i = 0; i < n; i++)
		{
			cin >> m >> f >> r;
			s[i] = m * 0.35 + f * 0.45 + r * 0.2;
			if (i + 1 == k) st = s[i];
		}
		sort(s, s + n);
		for (int i = n - 1; i >= 0; i--)
		{
			if (s[i] == st)
			{
				k = i;
				break;
			}
		}
		cout << "#" << tc << " " << a[k / (n / 10)] << '\n';
	}
	return 0;
}