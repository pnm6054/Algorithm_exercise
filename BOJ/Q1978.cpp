#include <iostream>
using namespace std;

int main(void)
{
	int t, n, p = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 2; i <= n; i++)
		{
			if (i == n) p++;
			if (n % i == 0) break;
		}
	}
	cout << p << endl;
	return 0;
}