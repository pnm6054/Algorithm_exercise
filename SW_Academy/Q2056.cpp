#include <iostream>
using namespace std;

int main(void)
{
	int y, m, d, t, r;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		r = 1;
		scanf("%4d%2d%2d", &y, &m, &d);
		switch (m)
		{
		case 1:
			if (d > 31 || d == 0) r = 0;
			break;
		case 2:
			if (d > 28 || d == 0) r = 0;
			break;
		case 3:
			if (d > 31 || d == 0) r = 0;
			break;
		case 4:
			if (d > 30 || d == 0) r = 0;
			break;
		case 5:
			if (d > 31 || d == 0) r = 0;
			break;
		case 6:
			if (d > 30 || d == 0) r = 0;
			break;
		case 7:
			if (d > 31 || d == 0) r = 0;
			break;
		case 8:
			if (d > 31 || d == 0) r = 0;
			break;
		case 9:
			if (d > 30 || d == 0) r = 0;
			break;
		case 10:
			if (d > 31 || d == 0) r = 0;
			break;
		case 11:
			if (d > 30 || d == 0) r = 0;
			break;
		case 12:
			if (d > 31 || d == 0) r = 0;
			break;
		default:
			r = 0;
		}
		printf("#%d ", i + 1);
		if (r) printf("%04d/%02d/%02d\n", y, m, d);
		else printf("-1\n");
	}
	return 0;
}