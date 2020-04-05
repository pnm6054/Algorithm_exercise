#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t, n, *a;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		a = new int[n];
		for (int j = 0; j < n; j++)
			cin >> a[j];
		sort(a, a + n);
		cout << "#" << i << " ";
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
	}
	return 0;
}