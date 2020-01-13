#include <iostream>
using namespace std;

int main(void)
{
	int n, t;
	cin >> t;
	while (t--)
	{
		long long k[4] = { 1, 1, 2, 4 };
		cin >> n;
		if (n < 4)
			cout << k[n] << endl;
		else
		{
			for (int i = 4; i < n + 1; i++)
			{
				k[i % 4] = k[0] + k[1] + k[2] + k[3];
			}
			cout << k[n % 4] << endl;
		}
	}
	return 0;
}