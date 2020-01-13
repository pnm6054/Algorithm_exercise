#include <iostream>
using namespace std;

int main(void)
{
	double p, n;
	cin >> p;
	while (1)
	{
		cin >> n;
		if (n == 999) break;
		printf("%.2f\n", n - p);
		p = n;
	}
	return 0;
}