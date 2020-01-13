#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, *a, *dp, m = 0;
	scanf("%d", &n);
	a = new int[n];
	dp = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	m = dp[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		dp[i] = max(dp[i - 1] + a[i], a[i]);
		if (dp[i] > m) m = dp[i];
	}
	printf("%d\n", m);
	return 0;
}