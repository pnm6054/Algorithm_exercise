#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, res, p = 0, a[246913] = { 0, 1 };
	while (1)
	{
		scanf("%d", &n);
		if (!n) break;
		if (p < 2 * n)
		{
			for (int i = 2; i <= 2 * n; i++)
			{
				for (int j = 2; i * j <= 2 * n; j++)
					a[i * j] = 1;
			}
		}
		p = 2 * n;
		res = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (!a[i]) res++;
		printf("%d\n", res);
	}
	return 0;
}