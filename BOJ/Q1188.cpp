#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int tmp, n;

	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int main(void)
{
	int n, m, g;
	cin >> n >> m;
	g = gcd(n, m);
	cout << m - g;
	return 0;
}