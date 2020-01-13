#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, *a;
	cin >> n >> m;
	a = new int[n + m];
	for (int i = 0; i < n + m; i++)
		cin >> a[i];
	sort(a, a + m + n);
	for (int i = 0; i < n + m; i++)
		cout << a[i] << " ";
	return 0;
}