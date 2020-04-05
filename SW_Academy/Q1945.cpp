#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e , n, t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		a = 0, b = 0, c = 0, d = 0, e = 0;
		while (1)
		{
			if (n % 2) break;
			n /= 2;
			a++;
		}
		while (1)
		{
			if (n % 3) break;
			n /= 3;
			b++;
		}
		while (1)
		{
			if (n % 5) break;
			n /= 5;
			c++;
		}
		while (1)
		{
			if (n % 7) break;
			n /= 7;
			d++;
		}
		while (1)
		{
			if (n % 11) break;
			n /= 11;
			e++;
		}
		cout << "#" << i << " " << a << " " << b << " " << c << " " << d << " " << e << '\n';
	}
	return 0;
}