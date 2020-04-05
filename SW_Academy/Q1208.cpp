#include <iostream>
using namespace std;

int main(void)
{
	int max, min, xp, np, a[100] = { 0, }, l;
	for (int i = 1; i <= 10; i++)
	{
		cin >> l;
		for (int j = 0; j < 100; j++)
		{
			cin >> a[j];
		}
		while (l)
		{
			max = 0;
			min = 100;
			xp = 0;
			np = 0;
			for (int j = 0; j < 100; j++)
			{
				if (max < a[j])
				{
					max = a[j];
					xp = j;
				}
				if (min > a[j])
				{
					min = a[j];
					np = j;
				}
			}
			a[xp]--;
			a[np]++;
			l--;
		}
		max = 0;
		min = 100;
		for (int j = 0; j < 100; j++)
		{
			if (max < a[j])
			{
				max = a[j];
			}
			if (min > a[j])
			{
				min = a[j];
			}
		}
		cout << max << " " << min << endl;
	}
	return 0;
}