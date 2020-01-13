#include <iostream>
using namespace std;

int main(void)
{
	int c, n, r;
	cin >> c;
	while (c--)
	{
		cin >> n;
		r = 0;
		for (int i = 1; i <= n; i++)
			if (!(n % i)) r++;
		cout << n << " " << r << '\n';
	}
	return 0;
}