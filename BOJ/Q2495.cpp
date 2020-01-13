#include <iostream>
using namespace std;

int main(void)
{
	int p = 0, m = 0, n, l = 0, t = 3;
	while (t--)
	{
		cin >> n;
		m = 0, l = 0;
		p = n % 10;
		n /= 10;
		while (n)
		{
			if (p == n % 10)
			{
				l++;
				if (l >= m)
					m = l;
			}
			else
			{
				p = n % 10;
				l = 0;
			}
			n /= 10;
		}
		cout << m + 1 << endl;
	}
	return 0;
}