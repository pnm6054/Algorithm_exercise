#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, *a, *b, s = 0;
	cin >> n;
	a = new int[n];
	b = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + n);
	for (int i = 0; i < n; i++)
		s += (a[i] * b[n - i - 1]);
	cout << s;
	return 0;
}