#include <iostream>
using namespace std;

int main(void)
{
	char tb[8][8];
	int l, p, r;
	for (int q = 1; q <= 10; q++)
	{
		cin >> l;
		r = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin >> tb[i][j];
			}
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8 - l + 1; j++)
			{
				p = 1;
				for (int k = 0; k < l / 2; k++)
				{
					if (tb[i][j + k] != tb[i][j + l - 1 - k]) p = 0;
				}
				if (p) r++;
			}
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8 - l + 1; j++)
			{
				p = 1;
				for (int k = 0; k < l / 2; k++)
				{
					if (tb[j + k][i] != tb[j + l - 1 - k][i]) p = 0;
				}
				if (p) r++;
			}
		}
		cout << "#" << q << " " << r << '\n';
	}
	return 0;
}