#include <iostream>
using namespace std;

int main(void)
{
	int t, n, m, r, a;
	cin >> t;
	
	while (t--)
	{
		r = 0;
		cin >> n >> m;
		for (int i = n; i <= m; i++)
		{
			a = i;
			if (a == 0) r++;
			while (a != 0)
			{
				if (a % 10 == 0) r++;
				a /= 10;
			}
		}
		cout << r << endl;
	}
	return 0;
}