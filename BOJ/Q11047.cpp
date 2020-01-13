#include <iostream>
using namespace std;

int main(void)
{
	int n, k, r = 0;
	cin >> n >> k;
	int * c = new int[n];
	for (int i = n - 1; i >= 0; i--)
		cin >> c[i];
	for (int i = 0; i < n; i++)
	{
		while (c[i] <= k)
		{
			k -= c[i];
			r++;
		}
		if (k == 0) break;
	}
	cout << r << endl;
	return 0;
}