#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	long long sum;
	cin >> t;
	while (t--)
	{
		cin >> n;
		sum = 0;
		for (long long i = 1; i <= n; i++)
			sum += (i * ((i + 1) * (i + 2) / 2));
		cout << sum << '\n';
	}
	return 0;
}