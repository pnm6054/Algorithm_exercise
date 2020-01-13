#include <iostream>
using namespace std;

int main(void)
{
	int n, a[100000] = { 0, }, m, i, j;
	scanf("%d %d", &n, &m);
	for (int k = 1; k <= n; k++)
	{
		scanf("%d", a + k);
		a[k] += a[k - 1];
	}
	for (int k = 0; k < m; k++)
	{
		scanf("%d %d", &i, &j);
		printf("%d\n", a[j] - a[i - 1]);
	}
	return 0;
}