#include <iostream>
using namespace std;

int main(void)
{
	int t, n;
	cin >> t;
	while (t--)
	{
		int z[2] = { 1, 0 }, o[2] = { 0, 1 };
		cin >> n;
		for (int i = 2; i <= n; i++)
		{
			z[i % 2] = z[0] + z[1];
			o[i % 2] = o[0] + o[1];
		}
		cout << z[n % 2] << " " << o[n % 2] << endl;
	}
	return 0;
}