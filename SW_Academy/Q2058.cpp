#include <iostream>
using namespace std;

int main(void)
{
	int n, sum = 0;
	cin >> n;
	while (n)
	{
		sum += (n % 10);
		n /= 10;
	}
	cout << sum;
	return 0;
}