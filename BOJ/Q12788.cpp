#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, m, k, t, p, s = 0, i;
	cin >> n >> m >> k;
	vector<int> a(n);
	p = m * k;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		a[i] = t;
	}
	sort(a.begin(), a.end());
	for (i = n - 1; i >= 0; i--)
	{
		s += a[i];
		if (s >= p) break;
	}
	if (s >= p)
		cout << n - i << endl;
	else
		cout << "STRESS" << endl;
	return 0;
}