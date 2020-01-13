#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int p = -1000001, n, d = 1;
	while (scanf("%d", &n) != EOF)
	{
		if (p > n)
		{
			d = 0;
			break;
		}
		p = n;
	}
	if (d) printf("Good");
	else printf("Bad");
	return 0;
}