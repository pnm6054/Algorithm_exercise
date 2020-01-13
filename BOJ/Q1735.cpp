#include <iostream>
#include <utility>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
	ll t;
	if (a < b) swap(a, b);
	while (b)
	{
		t = b;
		b = a % t;
		a = t;
	}
	return a;
}

ll lcm(ll a, ll b)
{
	return a * b / gcd(a, b);
}

int main(void)
{
	ll a, b, c, d, e, f, g;
	cin >> a >> c >> b >> d;
	f = lcm(c, d);
	e = (f / c) * a + (f / d) * b;
	g = gcd(e, f);
	cout << e/g << " " << f/g;
	return 0;
}