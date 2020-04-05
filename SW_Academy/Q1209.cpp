#include <iostream>
using namespace std;

int main(void)
{
	int a[101][101], s1, s2, n, sum, max;
	while (1)
	{
		cin >> n;
		s1 = 0;
		s2 = 0;
		max = 0;
		for (int i = 0; i < 101; i++)
		{
			if (i < 100)
			{
				sum = 0;
				for (int j = 0; j < 101; j++)
				{
					if (j < 100)
					{
						cin >> a[i][j];
						sum += a[i][j];
						if (i == j) s1 += a[i][j];
						if (i + j == 99) s2 += a[i][j];
					}
					else
					{
						a[i][j] = sum;
						if (sum > max) max = sum;
					}
				}
			}
			else
			{
				for (int j = 0; j < 100; j++)
				{
					sum = 0;
					for (int k = 0; k < 100; k++)
					{
						sum += a[k][j];
					}
					{
						a[i][j] = sum;
						if (sum > max) max = sum;
					}
				}
			}
		}
		if (s1 > max) max = s1;
		if (s2 > max) max = s2;
		cout << max << endl;
		if (n == 10) break;
	}
	return 0;
}