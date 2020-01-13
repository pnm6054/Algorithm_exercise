#include <iostream>
using namespace std;

int main(void)
{
	int n;
	long long dp[2] = { 1,1 };
	cin >> n;
	if (n < 3) cout << 1 << endl;
	else
	{
		for (int i = 0; i < n-1; i++)
		{
			dp[i % 2] = dp[0] + dp[1];
		}
		cout << dp[(n - 1) % 2] << endl;
	}
	return 0;
}