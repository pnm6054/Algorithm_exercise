#include <iostream>
using namespace std;

double factorial(double a)
{
	double j = 1;
	for (int i = 1; i <= a; i++)
	{
		j *= i;
	}
	return j;
}

int main(void)
{
	double e;
	printf("n e\n"); 
	printf("- -----------\n");
	printf("0 1\n"); 
	printf("1 2\n"); 
	printf("2 2.5\n");
	for (int i = 3; i < 10; i++)
	{
		e = 0;
		for (int j = 0; j <= i; j++)
		{
			e += 1 / factorial(j);
		}
		printf("%d %.9f\n", i, e);
	}
	
	return 0;
}