#include <iostream>
using namespace std;

int main(void)
{
	int n, m, i, j, *a;
	cin >> n >> m;
	a = new int[n + 1];
	for (int x = 1; x <= n; x++)
		a[x] = x;
	while (m--)
	{
		cin >> i >> j;
		for (int x = i; x <= (i + j - 1) / 2; x++)
			swap(a[x], a[j - x + i]);
	}
	for (int x = 1; x <= n; x++)
		cout << a[x] << " ";
	return 0;
}