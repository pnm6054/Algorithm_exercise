#include <stdio.h>

int main(void)
{
	int n, m, *p;
	p = new int[1000001];
	scanf("%d %d", &m, &n);
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)
			p[i * j] = 1;
	}
	for (int i = n; i <= m; i++)
		if (!p[i]) printf("%d", i);
	return 0;
}