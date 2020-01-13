#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, *a, m, n2;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		cin >> m;
		if (binary_search(a, a + n, m)) cout << 1 << "\n";
		else cout << 0 << "\n";
	}
	return 0;
}