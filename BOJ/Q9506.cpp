#include <iostream>
using namespace std;

int main(void)
{
	int n, d, m;
	while (1)
	{
		cin >> n;
		if (n == -1) break;
		d = 0;
		for (int i = 1; i < n; i++)
			if (n % i == 0)
			{
				m = i;
				d += m;
			}
		if (d == n)
		{
			cout << n << " = ";
			for (int i = 1; i < n; i++)
				if (n % i == 0)
				{
					cout << i;
					if (i != m) cout << " + ";
				}
			cout << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;
	}
	return 0;
}