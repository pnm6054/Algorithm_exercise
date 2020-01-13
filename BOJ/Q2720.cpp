#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int t, n, k, a[4] = { 25,10,5,1 };
	cin >> t;
	while (t--)
	{
		cin >> n;
		int r[4] = { 0, };
		for (int i = 0; i < 4; i++)
		{
			if (n >= a[i])
			{
				r[i] = floor(n / double(a[i]));
				n = n % a[i];
			}
			if (i != 0) cout << " ";
			cout << r[i];
		}
		cout << endl;
	}
	return 0;
}