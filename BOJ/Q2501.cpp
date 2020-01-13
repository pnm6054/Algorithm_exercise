#include <iostream>
using namespace std;

int main(void)
{
	int n, d = 1, k, r = 0;
	cin >> n >> k;
	while (d <= n)
	{
		if (n % d == 0) r++;
		if (r == k) break;
		d++;
	}
	if (d <= n) cout << d << endl;
	else cout << 0 << endl;
	return 0;
}