#include <iostream>
using namespace std;

int main(void)
{
	int n, dp[2] = { 0,1 };
	cin >> n;
	if (n < 2) cout << dp[n] << endl;
	else
	{
		for (int i = 2; i <= n; i++)
			dp[i % 2] = dp[0] + dp[1];
		cout << dp[n % 2] << endl;
	}
	return 0;
}