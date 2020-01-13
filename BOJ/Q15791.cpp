#include <iostream>
using namespace std;
long long mod = 1000000007, n, m;
long long a = 1, b = 1, c = 1;

long long power(long long a, long long b)
{
	if (!b) return 1;
	if (b & 1) return (a*power(a, b - 1) % mod) % mod;
	return power((a*a) % mod, b / 2) % mod;
}

int main(void)
{
	scanf(" %lld %lld", &n, &m);
	for (long long i = 1; i <= n; i++) {
		a *= i;
		a %= mod;
	}
	for (long long i = 1; i <= m; i++) {
		b *= i;
		b %= mod;
	}
	for (long long i = 1; i <= n - m; i++) {
		b *= i;
		b %= mod;
	}
	c = power(b, mod - 2);
	a *= c;
	a %= mod;
	printf("%lld\n", a);
	return 0;
}