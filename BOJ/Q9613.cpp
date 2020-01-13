#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int tmp;
	if (a < b)
		swap(a, b);
	while (b)
	{
		tmp = b;
		b = a % tmp;
		a = tmp;
	}
	return a;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, *a;
	long s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		s = 0;
		a = new int[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				s += gcd(a[i], a[j]);
			}
		}
		cout << s << '\n';
	}
	return 0;
}