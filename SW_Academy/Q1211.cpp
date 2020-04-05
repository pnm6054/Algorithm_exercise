#include <iostream>
using namespace std;

int main(void)
{
	int a[100][100], n, x, y, l, min, r = 0;
	while (1)
	{
		cin >> n;
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < 100; i++)
		{
			y = 0;
			l = 0;
			min = 500;
			if (a[0][i] == 1)
			{
				x = i;
				while (y != 99)
				{
					if (x != 0 && a[y][x - 1])
					{
						while (x != 0 && a[y][x - 1])
						{
							x--;
							l++;
						}
					}
					else if (x != 99 && a[y][x + 1])
					{
						while (x != 99 && a[y][x + 1])
						{
							x++;
							l++;
						}
					}
					y++;
					l++;
				}
				if (min >= l) 
				{
					min = l;
					r = i;
				}
			}
		}
		cout << "#" << n << " " << r << endl;
		if (n == 1) break;
	}
	return 0;
}