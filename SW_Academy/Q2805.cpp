#include <iostream>
using namespace std;

int main(void)
{
	int t, n, f, sum;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%1d", &f);
				if (i <= (n - 1) / 2)
				{
					if (j < (n + 1) / 2 + i && j >= (n - 1) / 2 - i) sum += f;
				}
				else
				{
					if (j > i - ((n + 1) / 2) && j < n - (i - ((n - 1) / 2))) sum += f;
				}
			}
		}
		cout << "#" << tc << " " << sum << '\n';
	}
	return 0;
}