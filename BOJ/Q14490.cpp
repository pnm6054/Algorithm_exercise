#include <iostream>
using namespace std;
/*

JAN 14, 2019 Baekjoon

https://www.acmicpc.net/problem/14490

*/
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main(void) {
	int n, m, res;
	scanf("%d:%d", &n, &m);
	res = gcd(n, m);
	cout << n / res << ":" << m / res;
	return 0;
}