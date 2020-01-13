#include <iostream>
using namespace std;

int main(void)
{
	int t, r = 0;
	long long x;
	cin >> t;
	while (t--)
	{
		int a[10] = { 0, }, r = 0;
		cin >> x;
		while (x)
		{
			a[x % 10] = 1;
			x /= 10;
		}
		for (int i = 0; i < 10; i++) r += a[i];
		cout << r << endl;
	}
	return 0;
}