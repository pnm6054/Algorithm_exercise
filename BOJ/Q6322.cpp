#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int a, b, c;
	double res;
	for (int i = 1; 1; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (!a && !b && !c) break;
		printf("Triangle #%d\n", i);
		if (a == -1)
		{
			if (b >= c)
				printf("Impossible.");
			else
			{
				res = sqrt(c * c - b * b);
				printf("a = %.3f", res);
			}
		}
		else if (b == -1)
		{
			if (a >= c)
				printf("Impossible.");
			else
			{
				res = sqrt(c * c - a * a);
				printf("b = %.3f", res);
			}
		}
		else if (c == -1)
		{
			res = sqrt(a * a + b * b);
			printf("c = %.3f", res);
		}
		printf("\n\n");
	}
	return 0;
}