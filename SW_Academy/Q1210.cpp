#include <iostream>
using namespace std;

int main(void)
{
	int a[100][100], n, x, y;
	while (1)
	{
		cin >> n;
		x = 0;
		y = 99;
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				cin >> a[i][j];
				if (a[i][j] == 2) x = j;
			}
		}
		while (y)
		{
			a[y][x] = 0;
			if (x != 0 && a[y][x - 1] == 1) x--;
			else if (x != 99 && a[y][x + 1] == 1) x++;
			else y--;
		}
		cout << "#" << n << " " << x << endl;
		if (n == 10) break;
	}
	return 0;
}