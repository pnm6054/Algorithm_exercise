#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, *a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[(n - 1) / 2] << '\n';
	return 0;
}