#include <iostream>
using namespace std;

int main(void)
{
	int n, m, i, j, k, a[100] = { 0 };
	cin >> n >> m;
	while (m--)
	{
		cin >> i >> j >> k;
		for (int x = i; x <= j; x++)
			a[x] = k;
	}
	for (int x = 1; x <= n; x++)
		cout << a[x] << " ";
	return 0;
}