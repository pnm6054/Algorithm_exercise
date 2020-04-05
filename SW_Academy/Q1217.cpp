#include <iostream>
using namespace std;

int inv(int n, int t)
{
	if (t == 0) return 1;
	return n * inv(n, t - 1);
}

int main(void)
{
	int t, n, k;
	while (1)
	{
		cin >> t >> n >> k;
		cout << "#" << t << " " << inv(n, k) << '\n';
		if (t == 10) break;
	}
	return 0;
}