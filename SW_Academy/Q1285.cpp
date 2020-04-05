#include <iostream>
using namespace std;

int main(void)
{
	int t, n, s, min, m;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		min = 100000;
		m = 0;
		cin >> n;
		while (n--)
		{
			cin >> s;
			if (s < 0) s *= -1;
			if (s < min)
			{
				min = s;
				m = 0;
			}
			if (s == min)
			{
				m++;
			}
		}
		cout << "#" << i << " " << min << " " << m << '\n';
	}
	return 0;
}