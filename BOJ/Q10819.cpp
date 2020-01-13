#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, *a, *b, *c, s = 0;
	cin >> n;
	a = new int[n];
	b = new int[n];
	c = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (i % 2) b[i] = a[n - int(i / 2) - 1];
		else b[i] = a[int(i / 2)];
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2) c[i] = a[int(i / 2)];
		else c[i] = a[n - int(i / 2) - 1];
	}
	for (int i = 0; i < n; i++)
	{
		cout << c[i] << " ";
	}
	/*
	for (int i = 0; i < n - 1; i++)
	{
		s += abs(b[i] - b[i + 1]);
	}
	cout << s << "\n";
	*/
	return 0;
}