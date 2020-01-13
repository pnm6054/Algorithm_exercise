#include <iostream>
using namespace std;

int main(void)
{
	int t, p;
	double parts[5] = { 350.34,230.90,190.55,125.30,180.90 }, sum;
	cin >> t;
	while (t--)
	{
		sum = 0.0;
		for (int i = 0; i < 5; i++)
		{
			cin >> p;
			sum += p * parts[i];
		}
		printf("$%.2f\n", sum);
	}
	return 0;
}