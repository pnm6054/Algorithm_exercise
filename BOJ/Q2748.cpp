#include <iostream>
using namespace std;

int main(void)
{
	long long n, a[2] = { 0,1 };
	cin >> n;
	if (n < 2) cout << n << endl;
	else
	{
		for (int i = 0; i < n; i++)
		{
			a[i % 2] = a[0] + a[1];
		}
		cout << a[n % 2] << endl;
	}
	return 0;
}