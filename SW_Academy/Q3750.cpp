#include <iostream>
using namespace std;
typedef long long ll;

ll f(ll a)
{
	ll sum = 0;
	while (a)
	{
		sum += (a % 10);
		a /= 10;
	}
	return sum;
}

int main(void)
{
	ios::sync_with_stdio(false);
	int t;
	ll n, r;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		r = f(n);
		while (r > 10)
		{
			n = r;
			r = f(n);
		}
		cout << "#" << tc << " " << r << '\n';
	}
	return 0;
}