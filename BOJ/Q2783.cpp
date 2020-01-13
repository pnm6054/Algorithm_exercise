#include <iostream>
using namespace std;

int main(void)
{
	int x, y, n;
	double p, t;
	scanf("%d %d %d", &x, &y, &n);
	p = x / (double)y;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y);
		t = x / (double)y;
		if (p > t) p = t;
	}
	printf("%.2lf", p * 1000);
	return 0;
}