#include <iostream>
using namespace std;

int main(void)
{
	int t;
	double p;
	cin >> t;
	while (t--)
	{
		cin >> p;
		printf("$%.2f\n", p * 0.8 + 1e-9);
	}
	return 0;
}