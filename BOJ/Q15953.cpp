#include <iostream>
using namespace std;

int main(void)
{
	int t, a, b, sum;
	cin >> t;
	while (t--)
	{
		sum = 0;
		cin >> a >> b;
		if (a == 1)
			sum += 500;
		else if (a >= 2 && a < 4)
			sum += 300;
		else if (a >= 4 && a < 7)
			sum += 200;
		else if (a >= 7 && a < 11)
			sum += 50;
		else if (a >= 11 && a < 16)
			sum += 30;
		else if (a >= 16 && a <= 21)	
			sum += 10;

		if (b == 1)
			sum += 512;
		else if (b >= (1 << 1) && b < (1 << 2))
			sum += 256;
		else if (b >= (1 << 2) && b < (1 << 3))
			sum += 128;
		else if (b >= (1 << 3) && b < (1 << 4))
			sum += 64;
		else if (b >= (1 << 4) && b < (1 << 5))
			sum += 32;
		cout << sum * 10000 << '\n';
	}
	return 0;
}