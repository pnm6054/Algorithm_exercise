#include <iostream>
using namespace std;

int div_sum(int a)
{
	int res = 0;
	while (a)
	{
		res += a % 10;
		a /= 10;
	}
	return res;
}

int main(void)
{
	int n, res = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (i + div_sum(i) == n)
		{
			res = i;
			break;
		}
	}
	cout << res << '\n';
	return 0;
}