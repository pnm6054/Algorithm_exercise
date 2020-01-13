#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, *dp, t;
	cin >> n;
	dp = new int[n + 1];
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++)
	{
		if (i % 3 == 0)
			dp[i] = dp[i - 1] < dp[i / 3] ? dp[i - 1] + 1 : dp[i / 3] + 1;
		else if (i % 2 == 0)
			dp[i] = dp[i - 1] < dp[i / 2] ? dp[i - 1] + 1 : dp[i / 2] + 1;
		else
			dp[i] = dp[i - 1] + 1;
	}
	cout << dp[n] << "\n";
	return 0;
}