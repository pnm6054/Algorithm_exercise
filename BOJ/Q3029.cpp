#include <iostream>
using namespace std;

int main(void)
{
	int h, m, s, n, b;
	scanf("%d:%d:%d", &h, &m, &s);
	n = h * 3600 + m * 60 + s;
	scanf("%d:%d:%d", &h, &m, &s);
	b = h * 3600 + m * 60 + s;
	if (n >= b) b = 86400 - n + b;
	else b -= n;
	n = b % 3600;
	printf("%02d:%02d:%02d\n", b / 3600, n / 60, n % 60);
	return 0;
}