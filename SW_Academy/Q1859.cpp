#include <iostream>
using namespace std;

int main(void)
{
	int t, n, *v, max;
	long long sum;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		sum = 0;
		max = 0;
		v = new int[n];
		for (int i = 0; i < n; i++)
			cin >> v[i];
		for (int i = n - 1; i >= 0; i--)
		{
			if (max <= v[i]) max = v[i];
			else
			{
				sum += (max - v[i]);
			}
		}
		cout << "#" << tc << " " << sum << endl;
	}
	return 0;
}