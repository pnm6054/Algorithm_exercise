#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	long long s = 0, r = 0, d;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> d;
		s += d;
		r += d * d;
	}
	cout << (s * s - r) / 2 << '\n';
	return 0;
}