#include <iostream>
using namespace std;

int main(void)
{
	int t, l, u, x;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> l >> u >> x;
		cout << "#" << tc << " ";
		if (l <= x && x <= u)
			cout << 0 << '\n';
		else if (x < l)
			cout << l - x << '\n';
		else if (x > u)
			cout << -1 << '\n';
	}
	return 0;
}