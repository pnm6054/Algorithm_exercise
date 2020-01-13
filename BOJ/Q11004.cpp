#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, *a;
	cin >> n >> k;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << a[k - 1];
	return 0;
}