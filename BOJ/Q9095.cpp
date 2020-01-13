#include <iostream>
using namespace std;

int main(void)
{
	int t, n;
	cin >> t;
	while (t--)
	{
		int dp[3] = { 1,2,4 };
		cin >> n;
		if (n < 4) cout << dp[n - 1] << endl;
		else
		{
			for (int i = 0; i < n - 3; i++)
				dp[i % 3] = dp[0] + dp[1] + dp[2];
			cout << dp[(n - 1) % 3] << endl;
		}
	}
	return 0;
}